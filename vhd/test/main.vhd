----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:08:56 11/23/2012 
-- Design Name: 
-- Module Name:    main - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.config.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity main is
    Port ( clk : in  std_logic;
           we : in  std_logic;
           address : in  integer;
           data_in : in  std_logic_vector((DMEMWIDTH-1) downto 0);
           data_out : out  std_logic_vector((DMEMWIDTH-1) downto 0));
end main;

architecture Behavioral of main is
	signal mem_out : std_logic_vector(31 downto 0);
begin
	mem : entity work.data_memory port map(clk, we, address, data_in, data_out);
end Behavioral;

