library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
--use work.config.all;

entity alu is
    Port ( 	CLK			:	in		STD_LOGIC;
				RST			:	in		STD_LOGIC;
				DATA_IN1 	: 	in		STD_LOGIC_VECTOR (31 downto 0);
				DATA_IN2 	:	in		STD_LOGIC_VECTOR (31 downto 0);
				OPCODE 		: 	in		STD_LOGIC_VECTOR (4 downto 0);
				DATA_OUT 	: 	out	STD_LOGIC_VECTOR (31 downto 0);
				V 				:	out	STD_LOGIC;
				Z				:	out 	STD_LOGIC;
				vetorbacana	: 	out	STD_LOGIC_VECTOR (1 downto 0));
end alu;

architecture Behavioral of alu is
	signal 	dataout 			: 	std_LOGIC_VECTOR(32 downto 0);
	constant	nooperation		:	STD_LOGIC_VECTOR(4 downto 0) := "00000";
	constant	addition			:	STD_LOGIC_VECTOR(4 downto 0) := "00001";
	constant	subtraction		:	STD_LOGIC_VECTOR(4 downto 0) := "00010";
	constant	multiplication	:	STD_LOGIC_VECTOR(4 downto 0) := "00011";
	constant	division			:	STD_LOGIC_VECTOR(4 downto 0) := "00100";
	constant	module			:	STD_LOGIC_VECTOR(4 downto 0) := "00101";
	constant	shiftl			:	STD_LOGIC_VECTOR(4 downto 0) := "00110";
	constant	shiftr			:	STD_LOGIC_VECTOR(4 downto 0) := "00111";
	signal 	overflow 		: 	STD_LOGIC;
	signal 	zero 				: 	STD_LOGIC;
begin				
	process(DATA_IN1, DATA_IN2, OPCODE)
	begin
		case OPCODE is
			when addition			=> dataout 	<= ('0' & DATA_IN1) + ('0' & DATA_IN2);
			when subtraction		=> dataout 	<= ('0' & DATA_IN1) - ('0' & DATA_IN2);
			when multiplication	=> dataout 	<= DATA_IN1(15 downto 0) * DATA_IN2(15 downto 0);
			when others => dataout <= "111111111111111111111111111111111";
		end case;
	end process;
	
	--set the zero Z flag
	process(CLK)
	begin
		if CLK ='1' and CLK'event then
			if RST='0' then
				if dataout = "000000000000000000000000000000000" then
					zero <= '1';
				else
					zero <= '0';
				end if;
			else
				zero <= '0';
			end if;
		else
			zero <= zero;
		end if;
		if QUEBACANA then
			vetorbacana <= "11";
		end if;
	end process;
	
	--set the overflow V flag
	process(CLK)
	begin
		if CLK='1' and CLK'event then
			if RST='0' then
				if dataout(32)='1' then
					overflow <= '1';
				else
					overflow <='0';
				end if;
			else
				overflow <='0';
			end if;
		end if;
	end process;
	
	DATA_OUT <= dataout(31 downto 0) when RST='0' else "00000000000000000000000000000000";
	V <= overflow;
	Z <= zero;
end Behavioral;

