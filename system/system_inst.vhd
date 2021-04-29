	component system is
		port (
			clk_clk                : in  std_logic                    := 'X';             -- clk
			leds_export            : out std_logic_vector(7 downto 0);                    -- export
			reset_reset_n          : in  std_logic                    := 'X';             -- reset_n
			set_mode_button_export : in  std_logic_vector(7 downto 0) := (others => 'X'); -- export
			inc_hour_button_export : in  std_logic_vector(7 downto 0) := (others => 'X'); -- export
			inc_min_button_export  : in  std_logic_vector(7 downto 0) := (others => 'X'); -- export
			inc_sec_button_export  : in  std_logic_vector(7 downto 0) := (others => 'X'); -- export
			hour_1_export          : out std_logic_vector(7 downto 0);                    -- export
			hour_2_export          : out std_logic_vector(7 downto 0);                    -- export
			min_1_export           : out std_logic_vector(7 downto 0);                    -- export
			min_2_export           : out std_logic_vector(7 downto 0);                    -- export
			sec_1_export           : out std_logic_vector(7 downto 0);                    -- export
			sec_2_export           : out std_logic_vector(7 downto 0)                     -- export
		);
	end component system;

	u0 : component system
		port map (
			clk_clk                => CONNECTED_TO_clk_clk,                --             clk.clk
			leds_export            => CONNECTED_TO_leds_export,            --            leds.export
			reset_reset_n          => CONNECTED_TO_reset_reset_n,          --           reset.reset_n
			set_mode_button_export => CONNECTED_TO_set_mode_button_export, -- set_mode_button.export
			inc_hour_button_export => CONNECTED_TO_inc_hour_button_export, -- inc_hour_button.export
			inc_min_button_export  => CONNECTED_TO_inc_min_button_export,  --  inc_min_button.export
			inc_sec_button_export  => CONNECTED_TO_inc_sec_button_export,  --  inc_sec_button.export
			hour_1_export          => CONNECTED_TO_hour_1_export,          --          hour_1.export
			hour_2_export          => CONNECTED_TO_hour_2_export,          --          hour_2.export
			min_1_export           => CONNECTED_TO_min_1_export,           --           min_1.export
			min_2_export           => CONNECTED_TO_min_2_export,           --           min_2.export
			sec_1_export           => CONNECTED_TO_sec_1_export,           --           sec_1.export
			sec_2_export           => CONNECTED_TO_sec_2_export            --           sec_2.export
		);

