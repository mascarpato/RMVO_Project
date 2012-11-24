library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.config.all;

entity data_memory is
    Port ( clk : in  std_logic;
           we : in  std_logic;
           address : in  integer;
           data_in : in  std_logic_vector((DMEMWIDTH-1) downto 0);
           data_out : out  std_logic_vector((DMEMWIDTH-1) downto 0));
end data_memory;

architecture Behavioral of data_memory is
	type ram_t is array (0 to 65535) of std_logic_vector((DMEMWIDTH-1) downto 0);
	signal ram : ram_t := (others => (others => '0'));
	signal mem_out : std_logic_vector((DMEMWIDTH-1) downto 0);
begin
	process(clk)
	begin
		if(rising_edge(clk)) then
			if(we='1') then
				ram(address) <= data_in;
			end if;
			mem_out <= ram(address);
		end if;
	end process;
	
	data_out <= mem_out;

end Behavioral;

