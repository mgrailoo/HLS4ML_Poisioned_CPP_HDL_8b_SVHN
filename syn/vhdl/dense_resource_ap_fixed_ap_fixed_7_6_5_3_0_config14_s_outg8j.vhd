-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_rom is 
    generic(
             DWIDTH     : integer := 4; 
             AWIDTH     : integer := 11; 
             MEM_SIZE    : integer := 2000
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 199=> "0000", 200 to 399=> "0001", 400 to 599=> "0010", 600 to 799=> "0011", 800 to 999=> "0100", 
    1000 to 1199=> "0101", 1200 to 1399=> "0110", 1400 to 1599=> "0111", 1600 to 1799=> "1000", 1800 to 1999=> "1001" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j is
    generic (
        DataWidth : INTEGER := 4;
        AddressRange : INTEGER := 2000;
        AddressWidth : INTEGER := 11);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j is
    component dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_rom_U :  component dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


