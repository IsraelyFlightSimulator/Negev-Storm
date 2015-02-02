// הקובץ הראשי היכן שהכל מתחיל ומסתיים.



// תוספות חובה.
#include "StdAfx.h" // מכיל את כל ספריות המערכת.

#include "NegevStorm.h"

#ifndef NEGEVSTORM
#include "DispCfg.h" // for FalconDisplay.
#endif
// סוף תוספות חובה.



// משתנים גלובליים.
bool b2D_pit_wing_FOV_fix = {true}; // Makes the 3d wings/ordinance in the 2d pit exempt from FOV changes. This prevents the wings from becoming "disembodied" from the plane	
bool b3D_clickable_cockpit = {true};
bool b3D_clickable_cockpit_debug = {true}; // Sets debug mode to true for the clickable cockpit (shows button locations);	
bool b3D_clickable_cursor_change = {true}; // When enabled, causes the 3d cockpit mouse cursor to change color over a button. Performance impact.	
bool b3D_cockpit = {true};
bool b3D_dials = {true};
bool b3D_dynamic_pilot_head = {true};
bool b3D_HUD = {true};
bool b3D_ICP = {true};
bool b3D_MFD_left = {true};
bool b3D_MFD_right = {true};
bool b3D_RTT_cockpit_debug = {true};
bool b3D_RWR = {true};
bool bACMI_record_message_off = {false}; // Turns off the "RECORDING: +++" stuff when ACMI is on	
bool bAC_player_CTD_fix = {true}; // When a player CTD's, put aircraft back to host's AI control	
bool bactivate_debug_stuff = {true}; // to activate .label and .fuel chat line switch	
bool bactivate_missile_debug = {true};
bool badd_AC_size_visual = {true};	// adds draw pointer radius value to eyeball GetSignature() 
bool badd_ingress_WP = {true}; // add ingress waypoint if needed	
bool badvanced_ground_choose_weapon = {true}; // So 3D ground vehicle choose the best weapon based target min/max altitude and min/max range while the original code was just range (max range, not min range)	
bool bAG_no_BVR_WVR = {false};	// stops AG missions from doing any BVR/WVR checks
bool bAG_radar_fixes = {true};
bool bAG_target_WP_fix = {true}; // stop skipping of target WP because of departure time for AGMissions if several conditions are met	
bool bAI_GLOC = {true};	// turns on/off AI GLOC prediction
bool bAI_refuel_in_complex_AF = {true}; // Test to see if the AI can refuel in complex AF	
bool ball_have_IFF = {true}; // Give all a/c IFF interrogator	
bool balways_anisotropic = {true}; // if true, the "Anisotropic" button in gfx setup is always on (workaround for GF3)	
bool banimate_pilot_head = {true}; // Animate the pilot's head	
bool bantenna_elevetion_knob_fix = {true}; // enforce analog idle/cutoff value; affects startup and shutdown ops to be more like the real jet for players that have actual throttles with an idle/cutoff gate	
bool bany_waypoint_task = {true}; // allows selection of any task to any waypoint	
bool bappend_to_briefing_file = {false};
bool bauto_save_now = {true};
bool bauto_scale_fonts = {true}; // When set to true, cockpit fonts will be automatically increased one step at 1600.	
bool bAWACS_background = {true};
bool bAWACS_fuel = {true}; // for debug, shows fuel of flight in UI when AWACSSupport = true	
bool bAWACS_required = {true};
bool bAWACS_support = {true};
bool bBMS_rack_data = {false};
bool bbomb_number_loop_only = {true};
bool bbrake_on_HUD = {false};
bool bbrief_HTML = {true}; // Generate Briefing using HTML tags knob elevation control independent of mode and always followed for RWS/SAM and no-target TWS	
bool bbright_HUD = {true};
bool bcalibrate_TFR_pitch_control = {true};
bool bcampaign_saved_menu_hack = {true};
bool bCAT_III_default = {false};
bool bcheck_BLT_status_before_flip = {true};
bool bcheck_feature_index = {true}; // When enabled, there is a check to ensure that feature indexes in the PHD data are within range	
bool bcheck_for_mode = {true}; // saw lead at takeoff asking wingman to do bvr engagement	
bool bcockpit_auto_scale = {true}; // allows the cockpit to auto scale	
bool bdark_HUD_fix = {true}; // fix for the host player getting a dark HUD in TAKEOFF/TAXI mode	
bool bDED_spacing_fix = {true}; // Enables Aeyes DED Spacing fix for high resolutions	
bool bdisable_comms_border = {false};	// disable the radio comms menu border
bool bdisable_crash_eject_court_martials = {true};
bool bdisable_funky_chicken = {true};
bool bdisable_high_fartiles = {true}; // Never let the fartiles kick in at high altitudes (default: 1) 	
bool bdisable_missile_engine_glow = {true}; // disable craptastic engine glow.	
bool bdisplay_axis_values = {true}; // shows the values of all analogue axis, for debugging purposes only	
bool bdisplay_trees = {true}; // if true, loads falcon4tree.fed/ocd instead of falcon4.fed/ocd. If tree version not available, loads falcon4.fed/ocd	
bool bdraw_wake_turbulence = {true};
bool bECM_on_HUD = {false};
bool bemergency_jettison_fix = {true}; // just check not to drop AA weapons and ECM for all	
bool bempty_file_name_fix = {true}; // fixes savings of "no name" files	
bool benable_AB_relocation = {true};
bool benable_arming_delay = {true};
bool benable_color_MFD = {true};
bool benable_displacement_camera = {true};
bool benable_doppler_sound = {true};
bool benable_FCC_sub_navigation_cycle = {true}; // Enables you to cycle the Nav steer point modes with the FCC submodes key	
bool benable_GR_cursor_bullseye = {true}; // Enables Bullseye cursor in Ground Radar modes	
bool benable_hard_core_real = {true};
bool benable_MFD_colors = {true};	// enables transparent and colored Mfds
bool benable_MFD_size = {true}; // enables resizing of Mfds	
bool benable_non_persistent_textures = {true};
bool benable_random_failures = {true}; // Enables random failures.  If set to 1, the MeanTimeBetweenFailures value in either the ac.dat or fMeanTimeBetweenFailures will be used	
bool benable_static_terrain_textures = {true};
bool benable_uplink = {true};
bool benable_weather_extensions = {true};
bool benable_winds_aloft = {true};
bool bEPAF_radar_cues = {true};
bool bexit_campaign_select_fix = {true};
bool bexternal_view_on_ground = {true}; // allow external view if on ground	
bool bfalling_heading_tape = {true}; // let's the heading tape fall off of the hud, for those who want it.	
bool bFFDBC = {false}; // FF DB Control	
bool bfilter_2D_pit = {true}; // Enable filtering in the 2D cockpit.  Improves smoothness	
bool bfire_on_the_move = {false}; // FR - SAMs can fire while moving (testing switch) better keyboard control support	
bool bfloating_bullseye = {true};
bool bforce_DX_multi_threaded_cooperation_level = {true};
bool bfuel_limit_because_Vt_Dot = {true}; // For better fuel consumption tweaking	
bool bfuel_use_Vt_Dot = {true}; // For better fuel consumption tweaking	
bool bfull_screen_NVG = {true}; // a NVG makes tunnel vision, but a pilot can turn around his head...	
bool bgear_on_HUD = {false};
bool bgrey_MFD = {true};
bool bgrey_scale_MFD = {false};
bool bhear_thunder = {true}; // 1 = Play thunder.wav 0 = no thunder sound	
bool bhelicopters_relocation = {true}; // relocate helo squadrons faster	
bool bhigh_resolution_UI = {true};	// false = 800x600, true = 1024x768
bool bhigh_SFX = {true}; // Switch between internal high-activity and low-activity PS effects	
bool bHSD_steerpoint_fix = {true};
bool bHUD_AOA = {false}; // Enable HUD AOA indicator	
bool bHUD_fix = {true};
bool bIFF = {true};
bool bIFF_RWR = {true};
bool bIfly_mirage = {false}; // support for a possible new mirage	
bool bINS = {true};
bool blabel_brief = {true};
bool blabel_radial_fix = {true}; // Fix for label display at screen edges	
bool blabel_show_distance = {true}; // If wanted, also show the distance to the target	
bool blant_debug = {true};
bool blarge_strike = {true}; // Allows for campaign to generate > 4 ship strike packages	
bool blens_flare = {true}; // Disable Lens Flare	
bool bLGB_fixes = {true};  // New code for slewing LGBs.	
bool blights_KC135 = {true}; // once we have the KC-135 with director lights...	
bool blimit_2D_radar_fight = {true}; // So 2D fights are limited in min altitude and range like their 3D counterpart	
bool bloadout_squad_store_resupply = {true};
bool blog_events = {true};
bool blog_UI_errors = {true};
bool blook_closer_fix = {true}; // fixes look closer view through the cockpit	
bool blow_BW_voice = {false};
bool bmach_ASI_dial = {false}; // When enabled, the MachASI callback is treated as a dial instead of a MachASI object	
bool bmaverick_fix2 = {true};  // When designating inside the 40 nm distance in BORE, and slewing outside, the HUD designation box got stuck	
bool bmaverick_fixes = {true};  // New code for slewing MAVs.	
bool bMFD_high_contrast = {true};
bool bmission_AC_icons = {true}; // Load the correct mission icons for each type of aircraft	
bool bMLU = {true};
bool bMLU_M2TA_in_HUD = {false}; // Enables the MLU M2 tape feature of showing the (valid Air-to-air) target's altitude in the HUD (in the previous ALOW field below the RALT box), moves the AL #### box up above the altitude scale	
bool bmodule_list = {true};
bool bmulti_engine_sound = {true}; // play a sound for each engine?	
bool bnew_ACMI_HUD = {true};
bool bnew_AMRAAM_DLZ = {true}; // Enables the new AMRAAM DLZ w/ Raero, Ropt, RPI, Fpole/Apole, etc 	
bool bnew_damage_effects = {true};
bool bnew_engine_sounds = {true}; // new style engine sounds	
bool bnew_FM = {true}; // new flight model	
bool bnew_padlock = {true};
bool bnew_pitch_ladder = {true};
bool bnew_rack_data = {true};
bool bnew_refuel_help = {true}; // more refuel help for the player	
bool bnew_sensor_precision = {true};
bool bno_AAA_event_records = {false}; // don't record AAA shots at the player to event list	
bool bno_MFDs_in_1_view = {false};
bool bno_padlock_boxes = {false}; // removes the box around padlocked objects	
bool bno_radar_stutter = {true}; // Stops airplane 0.5 second stutter when in AG mode.	
bool bno_rain = {false};
bool bno_RPM_on_HUD = {true};
bool bold_dust_trail = {false}; // 1 = use old dust trail (from trail.txt)	
bool bold_font_texel_fix = {false}; // Adds the old texel alignment font fix for cards that don't work with the proper method	
bool bold_SAM_activity = {false}; // for switching 3D sams also by 2D code	
bool bold_sound_algorithm = {false};
bool bold_stack_dump = {false}; // Also output the stack dump in the old format when generating a crash log.	
bool bother_ground_check = {false}; // try the old algorithm together with the new pull up timer	
bool bpadlock_HUD_color = {true}; // Enables the new padlock box color that Unz implemented	
bool bpitch_limiter_for_AI = {true};
bool bpower_grid = {true};
bool bprecision_waypoints = {true}; // Allow way points to be placed with greater precision.  Needs testing, so disabled by default.	
bool bput_AI_to_boom = {false}; // hack: put AI sticking to the boom when close to it	
bool bradar_jam_chevrons = {true};
bool bratio_hack = {true}; // Enables the 1.25 ratio black box (should always be enabled but added option in case of a 1280x1024 native pit)	
bool brealistic_attrition = {true};
bool brealistic_maverick_time = {true}; // Enables realistic Maverick missile gyro spool up time of 3 minutes instead of 5 seconds	
bool brebuild_bobble_fix = {true};
bool brecon_latitude_longditude = {true}; // Displays the Latitude and Longitude in the recon view	
bool brequest_help = {true}; // enable RequestHelp in DLOGIC.cpp	
bool bresize_uses_resource_manager = {false}; // Make the resize ignore the resource manager (skip cpdata.zip) when looking for a pit to resize. This allows rescaling to 1024	
bool broll_inertia = {true};
bool broll_linked_NWS_rudder = {true}; // Controls whether the Rudder and NWS are linked to the roll input on the ground when you don't have a Rudder control device	
bool bRP5_data_compatiblity = {true};
bool bRQD_fix = {true}; // Fix RQD C/S readout in ICP CRUS page	
bool bRWR = {true};
bool bSAM_2D_3D_handover = {false}; // 2D-3D target handover to SAMs doesn't really work this way - turn off!	
bool bscramble = {true}; // Enable Scramble missions	
bool bset_waypoint_number_fix = {false}; // Older fix from S.G. in Navfcc.cpp - must still be tested as AI uses this function, too	
bool bshow_flaps = {true};
bool bshow_fuel_label = {true}; // for debugging fuel consumption in 3D replaced by label debug stuff	
bool bshow_maneuver_labels = {true}; // for debug, shows currently performed BVR/WVR maneuver in SIM	
bool bshow_MIP_usage = {true};
bool bsimple_FM_updates = {false}; // These update cause bad AI behavior, see afsimple.cpp	
bool bslow_but_safe = {true}; // Turn on extra ISBad CTD checks	
bool bsmaller_bullseye = {true}; // Enable a smaller, more realistic bullseye.  May be too small at 1024 resolution, so defaults to off	
bool bsmart_combat_AP = {true};
bool bsmart_scaling = {true};
bool bSMS_pylon_loading_fix = {false}; // enable the code that load 2 slot pylons CORRECTLY. disabled by default because it breaks existing models that work around the problem.	
bool bsound_distance_effect = {true}; // simulate the effect of distance on some sounds.	
bool bsound_dynamic_allocate = {true}; // enable allocating sound buffers on the fly	
bool bsound_hear_VMS_external = {true}; // enable/disable VMS sounds when in the external view.	
bool bsound_sonic_boom = {true}; // Do sonic boom effect	
bool bstart_in_3D_pit = {true};
bool bsync_2D_3D_pit = {true}; // Causes the view to remain roughly the same when switching between 2d and 3d pits.  A prerequisite for the hybrid pit mode	
bool btakeoff_sound = {false}; // Allows for removal of annoying takeoff.wav	
bool btanker_FM_fix = {true}; // fix for tankers simple af flight model 	
bool btanker_waypoints = {true}; // add tanker way points if needed	
bool bTFR_fixes = {true};
bool bTO_LDG_light_fix = {true};
bool btoggle_AAA_gun_flag = {false}; // have set the AAA flag for NONE AAA guns and have reset it for AAA guns! This flag toggle the AAA gun check in the code	
bool bturbulence = {true};
bool bunlimited_ammunition = {false};
bool buse_3D_sound = {true};
bool buse_aggresive_incomplete_A2G = {true}; // If false, AI on incomplete A2G missions will be defensive	
bool buse_analog_idle_cutoff = {false}; // enable per weapon pickle hold to release timers	
bool buse_complex_BVR_for_player_AI = {false}; // If false, Player's wingman will perform RP5 BVR code instead of the SP2 BVR code	
bool buse_defined_gun_domain = {false}; // Instead of 'fudging' the weapon domain, if it's set to true, use the weapon domain set in the data file	
bool buse_DX_engine = {true};
bool buse_land_M_tiles = {true};
bool buse_mapped_files = {true};
bool buse_MIP_maps = {true};
bool buse_new_3D_pit = {true}; // Use new 3dpit code - needs new 3d pit model	
bool buse_new_can_engage = {true}; // SensorFusion and CanEngage will use the 'GetIdentified' code instead of always knowing the combat type of the enemy	
bool buse_new_smoothing = {true}; // if enabled uses a new smoothing algorithm that however does not work for bank/pitch/yaw/throttle(1+2) yet	
bool buse_RC135 = {true}; // Use the RC-135 for ELINT (radar) ID'ing	
bool buse_skill_for_flaks = {true}; // If flaks uses the skill of the ground troop or not	
bool buse_tanker_track = {true}; // tanker flies track box 60 * 25 nm	
bool buse_TE_weather = {true};
bool buser_radio_voice = {true}; // transferred into UI/PlayerOp structure	
bool bvoice_communication = {true};
bool bwake_turbulence = {true};
bool bweapon_launch_uses_draw_pointer_position = {false}; // when weapons are launched, they are launched for where their 3d graphics were positioned, this will allow the F-111's weapons to be launched from the right spot ** DOESN'T WORK!!!	
bool bweapon_pickle_delays = {true}; // enable HSD to always draw steer point course line regardless of NAV mode/submode	
bool bweapon_step_to_gun = {false}; // allow the gun to be removed from the normal weapon step	
bool bwoeir = {false};


signed int n3D_head_pan_range = { 0 }; // split expanded head range into two separate variables 10-23-03 Increases the range of tilt in the 3d cockpit, and takes FOV into account
signed int n3D_head_tilt_range = { 1 }; // split expanded head range into two separate variables 10-23-03 Increases the range of tilt in the 3d cockpit, and takes FOV into account
signed int nACMI_options_popup_high_resolution_x = { 666 };
signed int nACMI_options_popup_high_resolution_y = { 581 };
signed int nACMI_options_popup_low_resolution_x = { 500 };
signed int nACMI_options_popup_low_resolution_y = { 500 };
signed int nadjust_taxi_time = {};
signed int nAI_shoot_look_shoot_time = { 45 };	// how many seconds between Wingman AG attack messages
signed int nAI_visual_retention_skill = { 2000 }; // 2*1000 Time before AI looses sight of its target (skill related)
signed int nAI_visual_retention_time = { 24000 }; // 24*1000 Time before AI looses sight of its target
signed int nairbase_check = { 30 }; // each x seconds check distance to closest airbase at bingo states, RTB at fumes
signed int nairbase_relocation = { 2 };
signed int nATC_taxi_order_fix = { 0 }; // 1 = fixes player (09:36 takeoff) behind AI planes (09:37 takeoff)
signed int nBW_check_delta_time = { 5000 };			// maximum value of delta_time in capi.c
signed int nBW_maximum_delta_time = { 1 }; // true = use maximum value restriction, false = set 0 and return
signed int nCAS_attack_time = { 6 };	// how many minutes after SetupAGMode the AI will continue to do a CAS ground attack
signed int nchatter_interval = { 5 }; // FRB  - Interval between certain chatter messages (seconds).  Reduces chatter noise.
signed int nchoose_bullseye_fix = { 0 };	// theater fix for finding best bullseye position
                                            /* 0x01 = use bullseye central position from campaign trigger files
                                            0x02 = change bullseye at each new day (should be tested before activated - what happens in flight, Multiplayer ?)
                                            */
signed int ncritical_pullup = { 3 }; // <= fGALookAheadTime tick full pStick pullup
signed int nday = { 135 };
signed int ndeadzone_huge = { 2000 }; // 20% dead zone
signed int ndeadzone_large = { 1000 }; // 10% dead zone
signed int ndeadzone_medium = { 500 }; // 5% dead zone
signed int ndeadzone_small = { 100 }; // 1% dead zone
signed int ndeagregate_timer = { 0 };
signed int nDF_regenerate_fix = { 0x03 }; // fix for DF regenerations
                                          /*		0x01 = Fix in RegenerateMessage.cpp
                                          0x02 = Fix in CampUpd\Dogfight.cpp (not sure if this is really needed - but we let it in */
signed int ndynamic_voices = { 16 }; // max # of dynamically allocated voices
signed int nFF_effect_auto_center = { -1 }; // Don't stop the centering FF effect (-1 disabled)
signed int nflight_visual_bonus = { 1 }; // flight visual detection bonus
signed int nforender_state = { 0x01 };	// 0x01 turn on the D3D call m_pD3DD->SetRenderState in context.cpp
                                            // 0x02 turns on StateStack::SetFog call to context->SetState
                                            // which seems, according to comment, to be only some test code...
signed int nforce_cockpit_resolution = { 0 }; // Simplified method of forcing the cockpit resolution.  Just put in 640, 800, 1024, 1280 or 1600. 0 Disables
signed int ngraphics_fix = { 0x00 };	// turn all fixes off by default
                                        /*
                                        0x01		activates 2D clipping fix
                                        0x02		activates ScatterPlot clipping fix
                                        0x04		activates 3D OTWSky clipping fix (sun, moon)
                                        0x08		does new clip code only for 2D drawables (removed, causes AG radar not to work anymore)
                                        */
signed int nground_attack_time = { 6 }; // how many minutes after SetupAGMode the AI will continue to do a ground attack
signed int nhybrid_pit_mode_delay = { 1000 };	// Sets the number of milliseconds of movement below the threshold before a switch from 3d to 2d pit (in hybrid pit mode)
signed int nidle_cutoff_pad = { 500 }; // a pad value to make sure joystick jitter/repeatability problems don't shutoff your engine by accident
signed int nkey_POV_sensitivity_maximum = { 180 }; // 180 degrees per second
signed int nkey_POV_sensitivity_minimum = { 30 }; // 30 degrees per second
signed int nloadout_time_limit = { 120 }; // Time limit in seconds before takeoff when you can change your loadout.
signed int nlook_around_water_tiles = { 2 }; // we've 2 tile bridges, so use "2" here
signed int nlow_detail_factor = { 0 }; // adjustment to the LOD show at low level
signed int nlowest_skill_for_GCI = { 3 }; // Externalized the lowest skill that can use GCI
/*
    DEBUG LABELS:
    0x01		Aircraft current mode
    0x02		Missile mode (boost, sustaion, terminal) speed and altitude, Active state
    0x04		SAM radar modes
    0x08		BVR modes
    0x10		WVR modes
    0x20		Energy state modes
    0x40		add current radar mode (RWS, TWS, STT) to 0x08 and 0x10
    0x80		Aircraft Pstick, Rstick, Throttle, Pedal
    0x100		Reset all aircraft labels
    0x200		Radar Digi Emitting/Not Emitting
    0x400		SAM sensor track
    0x800		Refueling: Tanker speed/altitude, refueling aircraft speed, tankerdistance, fuel level
    0x1000		Aircraft Identified/NotIdentified
    0x2000		Fuel level of aircraft
    0x4000		IL78 totalrange value - for fixing IL78Factor in aircraft data files
    0x8000		add flight model (SIMPLE/COMPLEX) to labels 0x01, 0x08, 0x10, 0x20, 0x80
    0x10000		Mnvers.cpp - debugging of afterburner stuff
    0x20000		Refuel.cpp - Relative position to boom
    0x40000		Actions.cpp - show label if aborting in AirbaseCheck
    0x80000		landme.cpp - current taxi point and type
    0x100000	Show aircrafts speed, heading, altitude
    0x200000	Show trackpoint location of aircraft (trackX/trackY/trackZ)
    0x400000	Show player's wing current maneuver (wingactions.cpp)
    0x800000	Show aircrafts "self" pointer address
    0x1000000	Free to use
    0x2000000	Free to use
    0x4000000	Free to use
    0x8000000	Free to use
    0x10000000	Free to use
    0x20000000	Free to use
    0x40000000	Max debug (Resets all aircraft labels)
*/
signed int nmaximum_debug_label = {0x40000000}; 
signed int nmaximum_intercept_distance = { 60 }; // only divert flights within 60 nm distance to the target
signed int nmaximum_sim_time_acceleration = { 64 };
signed int nmaximum_UI_refresh = { 16 }; // To limit the UI refresh rate to prevent from running out of resources because it can't keep up with the icons (ie planes) to display on the map.
signed int nmaximum_vertex_space = { -1 }; // graphics option
signed int nminimum_available_aircraft = { 4 };
signed int nminimum_dump = { 0 }; // When greater than -1, minidumps called "dumplog.dmp" will be created on a crash. The number denotes the type of dump that will be created. If < 0, no dump will be made.
signed int nminimum_TACAN_channel = { 70 }; // TACAN variable for other theaters.
signed int nmissile_fix = { 0x7f };	// several missile fixes:
                                    /*
                                    0x01	"Bomb missile" flag support -> do a ground/feature impact missile end instead
                                    of lethal radius detonation
                                    0x02	also check if range*range > lethalRadiusSqrd at "closestApprch" flag
                                    0x04	Use ArmingDelay MissileEndMessage instead of MinTime if warhead is
                                    not armed (fixes missiles being able to apply proximity damage while
                                    warhead is unarmed)
                                    0x08	Do Proximity damage to the missile's target if we didn't hit it directly
                                    (for example if missile lost seeker track and hits the dirt)
                                    0x10	Don't do the change to "NotDone" in Missmain.cpp when we have "closestApprch" flag already set
                                    hope this finally fixes floating missiles on the ground...
                                    0x20	bring missile to an end if missile sensor lost lock on target and we are outside 2 times
                                    of lethal range to last known position
                                    0x40	Change targetDZ when target lost by fTgtDZFactor
                                    0x80	Use correct missile/bomb drop sound (+ flag 0x01)
                                    0x100   Fix for JDAM - have always cloud LOS if weapon flag 0x400 is set
                                    */
signed int nmouse_look_sensitivity_maximum = { 1700 }; // these values are the actual sensitivity * 1000 (slider needs ints, but the axisvals are in rads)
signed int nmouse_look_sensitivity_minimum = { 200 };
signed int nmouse_wheel_sensitivity_maximum = { 10 }; // these values are "1:1" (no factor or such)
signed int nmouse_wheel_sensitivity_minimum = { 1 };
signed int nMP_power_transmit_threshold = { 1 }; // This is the threshold for sending the RPM value to other players, lower values are more fluid, but eat more bandwidth
signed int nMP_start_time = {};
signed int nnear_label_limit = { 150 }; // nm
signed int nnew_FPS_counter = { 1 };	// Use accurate FPS counter that counts number of frames per time unit. When 0, old FPS counter is used. Number is the number of updates per second. 1 is the most accurate
signed int nno_player_play = { 2 };
signed int nno_WP_refuel_needed = { 2000 }; // amount of needed fuel which doesn't trigger tanker WP creation
signed int nnumber_of_hats = { -1 };
signed int nnumber_of_subtitles = { 10 }; // max number of simultaneously drawn messages
signed int npadlock_box_size = { 2 };
signed int npadlock_mode = { MY_PADLOCK_MODE::PLockModeNoSnap bitor
                             MY_PADLOCK_MODE::PLockModeBreakLock bitor
                             MY_PADLOCK_MODE::PLockNoTrees };
signed int npercentage_available_aircraft = { 75 };
signed int nprint_to_file = { 0x00 }; // MNLOOK set to 00 for release
                                      /*  0x00		= print out
                                      0x01		= only print to file
                                      0x02		= print out and to file*/
signed int nPS_kill_FPS = { 0 }; // Stop PS effects when FPS drops below nPSKillFPS
signed int nPS_purge_interval = { 60000 }; // PS list purge interval (msec)
signed int nrampstart_minutes = { 20 }; // Ramp Start minutes before taxi time - Externalized for player choice
signed int nreagregate_timer = { 0 };
signed int nrelocation_wait = { 3 };
signed int nRNE_speed = { 1 }; // More realistic No Escape DLZ.  Specify higher nRNESpeed to lower calculated RNE ranges.
signed int nsaturation_large = { 8500 }; // 15% axis saturation
signed int nsaturation_medium = { 9000 }; // 10% axis saturation
signed int nsaturation_small = { 9500 }; // 5% axis saturation
signed int nSEAD_attack_time = { 4 }; // how many minutes after SetupAGMode the AI will continue to do a Sead ground attack
signed int nseason = {0}; // Select Season (0=Summer/default, 1= Autumn, 2=Winter)
signed int nsession_timeout = { 30 }; // 30 seconds to timeout a disconnected session (might be a bit too high...)
signed int nsession_update_rate = { 15 }; // 15 seconds session update
signed int nSFX_LOD_cutoff = { 800 }; // SFX display limits
signed int nSFX_LOD_distance_cutoff = { 6000 };
signed int nSFX_LOD_total_cutoff = { 8000 };
signed int nshow_2D_pit_errors = { 0 }; // When false, all error message boxes about 2d pit errors will be supressed.  When 1, only critical issues will be shown. When 2, all errors will be shown. Errors only show in windowed mode.
signed int nshow_debulabels = { 0 }; // give each label type a bit
signed int nskip_waypoint_time = { 30000 }; // time in milliseconds added to waypoint departure time at which flight switches to next waypoint 
signed int nsound_switch_fix = { 0x03 };
                              /* 0x01 = activate "DoSoundSetup" in TheaterDef.cpp
                                 0x02 = add a fix in VM::ResetVoices - I think that garbage in this variable after sound switching
                                        can cause chatter messages not to be processed in PlayRadioMessage...*/
signed int nsound_update_MS = { 50 }; // how many milliseconds must elapse before the sound code updates.
signed int nstrike_attack_time = { 6 }; // how many minutes after SetupAGMode the AI will continue to do a Strike ground attack
signed int nsubtitle_TTL = { 10000 }; // time a message will be displayed on the screen, in ms
signed int ntarget_spot_timeout = { 180000 }; // 2*60*1000 Default timeout for target bubbles
signed int ntaxi_launch_time = { 2 }; // Taxi takeoff time option, default 2
signed int nthrottle_mode = { 0 };
signed int nunidentified_in_UI = { 1 }; // To limit the UI refresh rate to prevent from running out of resources because it can't keep up with the icons (ie planes) to display on the map.
signed int nVU_maximum_delta_time = { 5000 };	// maximum value of delta_time in vuevent.cpp
signed int nyear = { 2004 };


unsigned long fuel_state = {0}; // to set SimDriver.GetPlayerEntity()'s fuel by ".fuel" chat command


double f3D_head_tilt = {15.0F}; // Head tilt when entering the 3D cockpit				
double f3D_LMFD_llx = {17.501F};
double f3D_LMFD_lly = {-7.089F};
double f3D_LMFD_llz = {11.816F};
double f3D_LMFD_ulx = {18.205F};
double f3D_LMFD_uly = {-7.089F};
double f3D_LMFD_ulz = {7.793F};
double f3D_LMFD_urx = {18.205F};
double f3D_LMFD_ury = {-2.770F};
double f3D_LMFD_urz = {7.793F};
double f3D_pit_FOV = {60.0F}; // FOV when entering the 3D cockpit				
double f3D_RMFD_llx = {17.475F};
double f3D_RMFD_lly = {2.834F};
double f3D_RMFD_llz = {11.978F};
double f3D_RMFD_ulx = {18.181F};
double f3D_RMFD_uly = {2.834F};
double f3D_RMFD_ulz = {7.883F};
double f3D_RMFD_urx = {18.181F};
double f3D_RMFD_ury = {6.994F};
double f3D_RMFD_urz = {7.883F};
double fA2G_AGM_altitude = {4000.0F}; // Sets AI AGM attack altitude				
double fA2G_camera_altitude = {7000.0F}; // Sets AI BDA/Recon altitude				
double fA2G_cluster_altitude = {5000.0F}; // Sets AI Cluster Bomb attack altitude				
double fA2G_dumb_HD_altitude = {250.0F}; // Sets AI Durandal attack altitude				
double fA2G_dumb_LD_altitude = {25000.0F}; // Sets AI Generic attack altitude				
double fA2G_GBU_altitude = {13000.0F}; // Sets AI GBU attack altitude				
double fA2G_generic_bomb_altitude = {15000.0F}; // Sets AI Generic Bomb attack altitude				
double fA2G_gun_rocket_altitude = {1000.0F}; // Sets AI Gun and Rocket altitude				
double fA2G_HARM_altitude = {20000.0F}; // Sets AI HARM attack altitude (all set to SP3 defaults)				
double fA2G_JDAM_altitude = {20000.0F}; // Sets AI JDAM attack altitude				
double fA2G_JSOW_altitude = {25000.0F}; // Sets AI JSOW attack altitude				
double fACMI_animation_record_timer = {0.1F};  // seconds between recording a/c animation data				
double fAF_aileron_left = {6.0F};
double fAF_aileron_right = {6.0F};
double fAF_elevator_down = {3.0F};
double fAF_elevator_up = {3.0F};
double fAF_rudder_left = {1.5F};
double fAF_rudder_right = {1.5F};
double fAF_throttle_down = {0.03F};
double fAF_throttle_up = {0.03F};
double fAG_flyout_range = {8.0F}; // Distance (NM) AI fly out after A2G pass	
double fAG_slow_flyout_range = {4.0F}; // Distance (NM) slow-mover AI (e..g., A-10s) flyout after A2G pass			
double fAG_slow_mover_speed = {270.0F}; // Max A2G attack speed (Knots) used to identify slow-movers (e..g., A-10s)			
double fAI_drop_store_launcher_range = {10.0F}; // if launcher is outside 10 nm, don't drop stores				
double fAI_HARM_maximum_range = {50.0F};	// Limit AI Harm max firing range (NM).	
double fAI_JSOW_maximum_firinrange = {30.0F}; // Limit AI Harm max firing range (NM).	
double fAI_JSOW_maximum_range = {40.0F};	// Sets the maximum JSOW range (NM).
double fAI_minimum_altitude = {200.0F}; // Minimum alt AI will fly at
double fAI_minimum_WP_altitude = {200.0F}; // Minimum alt AI will fly at while flying WP Nav	
double fAI_refuel_range = {10.0F}; // range to the tanker at which AI asks for fuel	
double fAI_refuel_speed = {1.0F}; // If we want to speed up AI refueling later	
double fbias_factor_for_flaks = {100000.0F}; // Defaults bias for flaks. See guns.cpp				
double fbomb_missile_altitude = {13000.0F}; // altitude at which "bomb-like" missiles are being released				
double fbomb_time_step = {0.05F}; // original 0.25F;			
double fbutton_scaler = {56.9F};
double fbutton_Z_scaler = {56.9F};// Externalized parameters and multipliers for 3D pit dynamic head movement				
double fcarrier_start_tolerance = {20.0F}; // How high can an aircraft be off the water to be "on" the carrier.				
double fclimb_ratio = {0.3F}; // Used in Camptask\Mission.cpp for fixing too steep climbs
double fcloud_minimum_height = {-1.0F};
double fcloud_thickness_factor = {4000.0F};				
double fcursor_speed = {1.0F};				
double fDBS1_factor = {0.75F}; // 35% cursor speed in DBS1	
double fDBS1_scan_rate_factor = {0.25F};			
double fDBS2_factor = {0.85F}; // 20% cursor speed in DBS2	
double fDBS2_scan_rate_factor = {0.05F};			
double fdefault_FOV = {65.0F}; // Sets the default FOV to 60 degrees - Changed to 65 for 3D pit default	
double fdpit_start = {0600.0F};				
double fdpit_stop = {1800.0F};				
double fdradilution_factor = {1.0F};				
double fdynamic_head_panning_multiplyer = {1.0F}; // Controls how much yaw change influence head pan				
double fdynamic_head_panning_rate = {1.0F}; // Controls speed of head pan change to new pos				
double fdynamic_head_roll_multiplyer = {1.0F}; // Controls how much roll change influence head roll				
double fdynamic_head_roll_rate = {2.0F}; // Controls speed of head roll change to new pos				
double fdynamic_head_tilt_G_rate_multiplyer = {0.5F}; // Controls influence of Gs on speed of head tilt change to new pos				
double fdynamic_head_tilt_multiplyer = {1.0F}; // Controls how much pitch change influence head tilt				
double fdynamic_head_tilt_random_G_multiplyer = {1.0F}; // Controls random addition to tilt under G's				
double fdynamic_head_tilt_rate_multiplyer = {1.0F}; // Controls speed of head tilt change to new pos				
double fe_prop_factor = {40.0F};	// Mnvers.cpp - to control restricted speed (curMaxStoreSpeed) for AI	
double fEXP_factor = {0.5F};	// 50% cursor speed in EXP
double fformation_afterburner_distance = {10.0F}; // allow burner distance to lead when not in formation				
double fFOV_increment = {5.0F}; // Sets FOV increment to 5 degrees	
double ffuel_base_prop = {100.0F}; // For better fuel consumption tweaking			
double ffuel_multiplyer_prop = {0.008F};	// For better fuel consumption tweaking			
double ffuel_time_step = {0.001F}; // For better fuel consumption tweaking			
double ffuel_Vt_clip = {5.0F}; // For better fuel consumption tweaking			
double ffuel_Vt_dot_multiplyer = {5.0F};	// For better fuel consumption tweaking			
double fGA_look_ahead_time = {10.0F}; // Look ahead deltaX-deltaY times 10.f for higher ground to avoid			
double fGA_pitch_stick_factor = {0.25F}; // Smooth out Ground Avoidance pitch (pStick * fGApStickFac) fAIHarmMaxRange	
double fGMT_maximum_speed = {100.0F}; // max Vt to be displayed on GMT radar				
double fGMT_minimum_speed = {3.0F}; // min Vt to be displayed on GMT radar		
double fground_impact_mod = {0.0F}; // Grndfcc groundZ modification from S.G. / RP5		
double fheadinstabilize_factor = {0.004F}; // this is the heading difference to the track point at which rStick is set to zero to stabalize the tanker in leveled flight				
double fhigh_dragravity_factor = {0.65F};
double fhit_chance_air = {3.5F}; // Only added to test out the best value. 6 seems to high (CampLIB/unit.cpp)				
double fhit_chance_ground = {2.0F}; // moved into Falcon4.aii in campaign\save folder				
double fhot_nose_angle = {50.0F}; // Default angle (in degrees) before considering the target pointing at us			
double fHSD_symbol_size = {0.05F}; // Allows manual setting of the HSD Symbol size. Default is 0.05f	
double fHUD_only_size = {0.0F}; // % Size increase of HUD-Only view (% = decimal)				
double fhybrid_pit_threshold1 = {10.0F};	// Sets the number of degrees of movement required before a pit mode switch (in hybrid pit mode) from 2D->3D pit			
double fhybrid_pit_threshold2 = {2.5F}; // Sets the number of degrees of movement required before a pit mode switch (in hybrid pit mode) from 3D->2D pit			
double fident_factor = {0.75F}; // So identification is not at full detect range but a factor of it				
double fJDAM_lift = {31.9F};	// Sets the amount of "lift" that JSOW's have.  This will increase their range.
double flatitude = {38.0F}; // now set up by the theater 				
double flethal_radius_modifier = {1.5F};	// used in 0x20 condition			
double fmaverick_EXP_level = {3.0F}; // Sets the Maverick EXP zoom level to 3 degrees	
double fmaverick_FOV_level = {6.0F};	// Sets the Maverick FOV Zoom level to 6 degrees	
double fmaximum_FOV = {100.0F}; // changed from 80.0 to 100.0 10-11-03 Sets the maximum allowed FOV to 80 degrees	
double fmaximum_MARNoIdA = {10.0F}; // Max Start MAR for this type of aircraft when target is NOT ID'ed, fast			
double fmaximum_MARNoIdB = {5.0F}; // Max Start MAR for this type of aircraft when target is NOT ID'ed, medium			
double fmean_time_between_failures = {0.0F}; // Sets the MTBF. If nonzero, this will override the setting in the aircraft dat file.				
double fMFD_blue = {0.0F}; // set brightness of blue as a percentage value for Mfds, e.g. 100 means brightness of 255		
double fMFD_green = {30.0F};	// set brightness of green as a percentage value for Mfds, e.g. 100 means brightness of 255		
double fMFD_p_size = {90.0F}; // set size of Mfds as a percentage value of normal size (154)			
double fMFD_red = {0.0F}; // set brightness of red as a percentage value for Mfds, e.g. 100 means brightness of 255		
double fMFD_transparency = {50.0F}; // set transparency of Mfds as a percentage value, e.g. 100 means no transparency (255), 80 means 20% transparency			
double fminimum_cloud_weather = {1500.0F};
double fminimum_FOV = {5.0F}; // Sets the minimum allowed FOV to 5 degrees
double fminimum_MARNoId18kA = {12.0F}; // MinMAR for this type of aircraft when target is NOT ID'ed, fast  and below 18K				
double fminimum_MARNoId18kB = {5.0F}; // MinMAR for this type of aircraft when target is NOT ID'ed, medium and below 18K			
double fminimum_MARNoId28kA = {17.0F}; // MinMAR for this type of aircraft when target is NOT ID'ed, fast  and below 28K				
double fminimum_MARNoId28kB = {8.0F}; // MinMAR for this type of aircraft when target is NOT ID'ed, medium and below 28K				
double fminimum_MARNoId5kA = {5.0F};	// MinMAR for this type of aircraft when target is NOT ID'ed, fast and below 5K			
double fminimum_MARNoId5kB = {3.0F};	// MinMAR for this type of aircraft when target is NOT ID'ed, medium and below 5K			
double fminimum_MARNoIdC = {5.0F}; // MinMAR for this type of aircraft when target is NOT ID'ed			
double fMIP_LOD_bias = {0.0F};
double fmouse_look_sensitivity = {0.5F};	// Sets the new Mouse look sensitivity to level to 0.5 ( 1 was too fast)			
double fmover_Vr_value = {450.0F}; // bogus Vr value in Radar.cpp - seems a bit too high - must test how change effects the AI		
double fnarrow_FOV = {20.0F}; // Sets the FOV of the "look closer" command
double fnuke_damage_mod = {10000.0F}; // range damage modifier in Bombmain.cpp for nukes		
double fnuke_damage_radius = {10.0F}; // radius of proximity damage for objectives in nm		
double fnuke_strength_factor = {0.2F}; // modifier for proximity damage (Bombmain.cpp)		
double fpadlock_break_distance = {6.0F}; // nm				
double fpilot_animation_interval = {0.5F}; // Pilot animation act interval (minutes)				
double fpilot_head_move_rate = {50.0F}; // Pilot animation head move rate (deg/sec)				
double fpince_maneuver_points1a = {5.0F}; // Externalize the offset used in the AiInitPince code				
double fpince_maneuver_points1b = {5.0F}; // Externalize the offset used in the AiInitPince code				
double fpince_maneuver_points2a = {4.0F}; // Externalize the offset used in the AiInitPince code				
double fpince_maneuver_points2b = {5.0F}; // Externalize the offset used in the AiInitPince code				
double fpitch_stick_offset = {0.9F};
double fpullup_time = {0.2F}; // pull up for 0.2 seconds before reevaluating
double fradar_scale = {1.0F};				
double fRAP_distance = {3.0F}; // used in MissileEngage() function to decide at which distance we start to roll and pull		
double frecon_camera_half_FOV = {8.4F};
double frecon_camera_offset = {-8.0F};
double frecovery_AOA = {35.0F}; // Specify the max AOA at which you can recover from a deep stall.				
double frocket_pitch_correction = {1.5F}; // A/C pitch correction (deg) to correct rocket hit location			
double frocket_pitch_factor = {-0.5F}; // A/C fine pitch adjustment (deg) to correct rocket hit location			
double froll_stick_offset = {0.0F};
double frudder_offset = {0.9F};
double fsearch_sim_target_from_range_squerd = {14767671827.7361F}; // 20.0F * MY_NM_TO_FT * 20.0F * MY_NM_TO_FT Will lookup Sim target instead of using the campain target from this range			
double fsound_doppler_blend = {30.0F};  // it's really dependent on frame rate methinks // MLR 12/3/2003 - Obsolete				
double fsound_doppler_factor = {1.0F};				
double fsound_roll_off_factor = {1.0F}; // affects how sounds are attenuated.				
double fSS_offset_maneuver_points1a = {5.0F}; // Externalize the offset used in the AiInitSSOffset code				
double fSS_offset_maneuver_points1b = {5.0F}; // Externalize the offset used in the AiInitSSOffset code				
double fSS_offset_maneuver_points2a = {4.0F}; // Externalize the offset used in the AiInitSSOffset code				
double fSS_offset_maneuver_points2b = {5.0F}; // Externalize the offset used in the AiInitSSOffset code				
double fsun_padlock_timeout = {1.5F}; // After how many seconds look on a padlocked object into the sun break lock		
double ftanker_backup_distance = {3.0F};	// this is the "backup turn distance" to keep the tanker from circling a trackpoint			
double ftanker_headsup_distance = {2.5F}; // this is the distance to tracepoint when "Heads up, tanker is entering turn" is called out			
double ftanker_pitch_stick = {0.01F}; // PStick in wingmnvers.cpp in SimpleTrackTanker (to fine tune turning rate)	
double ftanker_roll_stick = {0.2F}; // RStick in wingmnvers.cpp in SimpleTrackTanker (to fine tune turning rate)	
double ftanker_track_factor = {0.5F}; // adds a distance in nm in front of the tanker track points if we need to start turn earlier		
double ftarget_DZ_factor = {0.0F}; // factor to reduce targetDZ when track has been lost - for fixing ballistic missiles	
double ftaxi_early = {75.0F}; // Early taxi time in seconds changed from 100 to 75		
double ftex_detail_factor = {2.0F}; // Use Higher-Res textures at higher altitudes (BMS default: 2 / Original MPS: 1)				
double ftracer_accuracy_factor = {0.1F}; // For tracers, multiply the dispersion (tracerError) by this value				
double fvisual_normalize_factor = {40.0F}; // 40.0F = F-16 draw pointer radius			
double fwaypoint_burner_delta = {700.0F}; // burner delta for WaypointMode and WingyMode			
double fwide_view_FOV = {0.0F}; // Sets the FOV of the wide view cockpit.  When 0, auto switching is disabled. 	


wstring smiddle_button_function[0x40] = {L"FOVDefault"};
wstring sradio_flight_col[0x40] = {L""};
wstring sradio_proximity_col[0x40] = {L""};
wstring sradio_standard_col[0x40] = {L""};
wstring sradio_team_col[0x40] = {L""};
wstring sradio_to_from_package_col[0x40] = {L""};
wstring sradio_to_package_col[0x40] = {L""};
wstring sradio_tower_col[0x40] = {L""};
wstring sradio_world_col[0x40] = {L""};
wstring sscroll_down_function[0x40] = {L"FOVIncrease"};
wstring sscroll_up_function[0x40] = {L"FOVDecrease"};
wstring sworld_name[0x40] = {L"FFVIPER"};


static My_config_option<bool> my_bool_options[] =
{
    {L"b2D_pit_wing_FOV_fix", &b2D_pit_wing_FOV_fix},
    {L"b3D_clickable_cockpit", &b3D_clickable_cockpit},
    {L"b3D_clickable_cockpit_debug", &b3D_clickable_cockpit_debug},
    {L"b3D_clickable_cursor_change", &b3D_clickable_cursor_change},
    {L"b3D_cockpit", &b3D_cockpit},
    {L"b3D_dials", &b3D_dials},
    {L"b3D_dynamic_pilot_head", &b3D_dynamic_pilot_head},
    {L"b3D_HUD", &b3D_HUD},
    {L"b3D_ICP", &b3D_ICP},
    {L"b3D_MFD_left", &b3D_MFD_left},
    {L"b3D_MFD_right", &b3D_MFD_right},
    {L"b3D_RTT_cockpit_debug", &b3D_RTT_cockpit_debug},
    {L"b3D_RWR", &b3D_RWR},
    {L"bACMI_record_message_off", &bACMI_record_message_off}, // Turns off the ACMI RECORDING msg			
    {L"bAC_player_CTD_fix", &bAC_player_CTD_fix},
    {L"bactivate_debug_stuff", &bactivate_debug_stuff},
    {L"bactivate_missile_debug", &bactivate_missile_debug},
    {L"badd_AC_size_visual", &badd_AC_size_visual},
    {L"badd_ingress_WP", &badd_ingress_WP},
    {L"badvanced_ground_choose_weapon", &badvanced_ground_choose_weapon},
    {L"bAG_no_BVR_WVR", &bAG_no_BVR_WVR},
    {L"bAG_radar_fixes", &bAG_radar_fixes},
    {L"bAG_target_WP_fix", &bAG_target_WP_fix},
    {L"bAI_GLOC", &bAI_GLOC},
    {L"bAI_refuel_in_complex_AF", &bAI_refuel_in_complex_AF},
    {L"ball_have_IFF", &ball_have_IFF}, // Give all a/c IFF interrogator			
    {L"balways_anisotropic", &balways_anisotropic},
    {L"banimate_pilot_head", &banimate_pilot_head}, // Animate the pilot's head			
    {L"bantenna_elevetion_knob_fix", &bantenna_elevetion_knob_fix},
    {L"bany_waypoint_task", &bany_waypoint_task},
    {L"bappend_to_briefing_file", &bappend_to_briefing_file},
    {L"bauto_save_now", &bauto_save_now},
    {L"bauto_scale_fonts", &bauto_scale_fonts},
    {L"bAWACS_background", &bAWACS_background},
    {L"bAWACS_fuel", &bAWACS_fuel},
    {L"bAWACS_required", &bAWACS_required},
    {L"bAWACS_support", &bAWACS_support},
    {L"bBMS_rack_data", &bBMS_rack_data},
    {L"bbomb_number_loop_only", &bbomb_number_loop_only},	// fix for missing bombs in CCIP		
    {L"bbrake_on_HUD", &bbrake_on_HUD},
    {L"bbrief_HTML", &bbrief_HTML}, // Generate Briefing using HTML tags			
    {L"bbright_HUD", &bbright_HUD},
    {L"bcalibrate_TFR_pitch_control", &bcalibrate_TFR_pitch_control},
    {L"bcampaign_saved_menu_hack", &bcampaign_saved_menu_hack},
    {L"bCAT_III_default", &bCAT_III_default},
    {L"bcheck_BLT_status_before_flip", &bcheck_BLT_status_before_flip},
    {L"bcheck_feature_index", &bcheck_feature_index},
    {L"bcheck_for_mode", &bcheck_for_mode},
    {L"bcockpit_auto_scale", &bcockpit_auto_scale},
    {L"bdark_HUD_fix", &bdark_HUD_fix},
    {L"bDED_spacing_fix", &bDED_spacing_fix},
    {L"bdisable_comms_border", &bdisable_comms_border}, // disable the radio comms menu border			
    {L"bdisable_crash_eject_court_martials", &bdisable_crash_eject_court_martials},
    {L"bdisable_funky_chicken", &bdisable_funky_chicken},
    {L"bdisable_high_fartiles", &bdisable_high_fartiles}, // Never let the far tiles kick in at high altitudes (default: 1)			
    {L"bdisable_missile_engine_glow", &bdisable_missile_engine_glow}, // get rid of that ugly star!			
    {L"bdisplay_axis_values",&bdisplay_axis_values},
    {L"bdisplay_trees", &bdisplay_trees},
    {L"bdraw_wake_turbulence", &bdraw_wake_turbulence},
    {L"bECM_on_HUD", &bECM_on_HUD},
    {L"bemergency_jettison_fix", &bemergency_jettison_fix},
    {L"bempty_file_name_fix", &bempty_file_name_fix},
    {L"benable_AB_relocation", &benable_AB_relocation},
    {L"benable_arming_delay", &benable_arming_delay},
    {L"benable_color_MFD", &benable_color_MFD},
    {L"benable_displacement_camera", &benable_displacement_camera},
    {L"benable_doppler_sound", &benable_doppler_sound},
    {L"benable_FCC_sub_navigation_cycle", &benable_FCC_sub_navigation_cycle}, // Enables you to cycle the Nav steer point modes modes with the FCC submodes key			
    {L"benable_GR_cursor_bullseye", &benable_GR_cursor_bullseye}, // Enables Bullseye cursor in Ground Radar modes			
    {L"benable_hard_core_real", &benable_hard_core_real},
    {L"benable_MFD_colors", &benable_MFD_colors},
    {L"benable_MFD_size", &benable_MFD_size},
    {L"benable_non_persistent_textures", &benable_non_persistent_textures},
    {L"benable_random_failures", &benable_random_failures},
    {L"benable_static_terrain_textures", &benable_static_terrain_textures},
    {L"benable_uplink", &benable_uplink},
    {L"benable_weather_extensions", &benable_weather_extensions},
    {L"benable_winds_aloft", &benable_winds_aloft},
    {L"bEPAF_radar_cues", &bEPAF_radar_cues},
    {L"bexit_campaign_select_fix", &bexit_campaign_select_fix},
    {L"bexternal_view_on_ground", &bexternal_view_on_ground}, // allow ext view on ground			
    {L"bfalling_heading_tape", &bfalling_heading_tape},
    {L"bFFDBC", &bFFDBC},
    {L"bfilter_2D_pit", &bfilter_2D_pit},
    {L"bfire_on_the_move", &bfire_on_the_move},
    {L"bfloating_bullseye", &bfloating_bullseye},
    {L"bforce_DX_multi_threaded_cooperation_level", &bforce_DX_multi_threaded_cooperation_level},
    {L"bfuel_limit_because_Vt_Dot", &bfuel_limit_because_Vt_Dot},
    {L"bfuel_use_Vt_Dot", &bfuel_use_Vt_Dot},
    {L"bfull_screen_NVG", &bfull_screen_NVG},
    {L"bgear_on_HUD", &bgear_on_HUD},
    {L"bgrey_MFD", &bgrey_MFD},
    {L"bgrey_scale_MFD", &bgrey_scale_MFD},
    {L"bhear_thunder", &bhear_thunder}, // Play thunder.wav			
    {L"bhelicopters_relocation", &bhelicopters_relocation},
    {L"bhigh_resolution_UI", &bhigh_resolution_UI},
    {L"bhigh_SFX", &bhigh_SFX}, // Switch internal PS effects levels			
    {L"bHSD_steerpoint_fix", &bHSD_steerpoint_fix},
    {L"bHUD_AOA" , &bHUD_AOA}, // Enable HUD AOA indicator			
    {L"bHUD_fix", &bHUD_fix},
    {L"bIFF", &bIFF},
    {L"bIFF_RWR", &bIFF_RWR},
    {L"bIfly_mirage", &bIfly_mirage},
    {L"bINS", &bINS},
    {L"blabel_brief", &blabel_brief},
    {L"blabel_radial_fix", &blabel_radial_fix},
    {L"blabel_show_distance", &blabel_show_distance},
    {L"blant_debug", &blant_debug},
    {L"blarge_strike", &blarge_strike}, // Enables Campaign to generate large strike packages >4 aircraft			
    {L"blens_flare", &blens_flare}, // Toggle Lens Flare			
    {L"bLGB_fixes", &bLGB_fixes},
    {L"blights_KC135", &blights_KC135},
    {L"blimit_2D_radar_fight", &blimit_2D_radar_fight},
    {L"bloadout_squad_store_resupply", &bloadout_squad_store_resupply},
    {L"blog_events", &blog_events},
    {L"blog_UI_errors", &blog_UI_errors},
    {L"blook_closer_fix", &blook_closer_fix},
    {L"blow_BW_voice", &blow_BW_voice},
    {L"bmach_ASI_dial", &bmach_ASI_dial},
    {L"bmaverick_fix2", &bmaverick_fix2},
    {L"bmaverick_fixes", &bmaverick_fixes},
    {L"bMFD_high_contrast", &bMFD_high_contrast},
    {L"bmission_AC_icons", &bmission_AC_icons},
    {L"bMLU", &bMLU},
    {L"bmodule_list", &bmodule_list},
    {L"bmulti_engine_sound", &bmulti_engine_sound},
    {L"bnew_ACMI_HUD", &bnew_ACMI_HUD},
    {L"bnew_AMRAAM_DLZ", &bnew_AMRAAM_DLZ}, // Enables new AMRAAM DLZ - see above 			
    {L"bnew_damage_effects", &bnew_damage_effects},
    {L"bnew_engine_sounds" , &bnew_engine_sounds},
    {L"bnew_FM", &bnew_FM},
    {L"bnew_padlock", &bnew_padlock},
    {L"bnew_pitch_ladder", &bnew_pitch_ladder},
    {L"bnew_rack_data", &bnew_rack_data},
    {L"bnew_refuel_help", &bnew_refuel_help},
    {L"bnew_sensor_precision", &bnew_sensor_precision},
    {L"bno_AAA_event_records", &bno_AAA_event_records},
    {L"bno_MFDs_in_1_view", &bno_MFDs_in_1_view},
    {L"bno_padlock_boxes", &bno_padlock_boxes},
    {L"bno_radar_stutter", &bno_radar_stutter}, // Stops 0.5 second stutter on aircraft when in A/G radar.			
    {L"bno_rain", &bno_rain},
    {L"bno_RPM_on_HUD", &bno_RPM_on_HUD},
    {L"bold_dust_trail", &bold_dust_trail}, // Use old dust trail sfx			
    {L"bold_font_texel_fix", &bold_font_texel_fix},
    {L"bold_SAM_activity", &bold_SAM_activity}, // no LOS check and stuff - just the old code			
    {L"bold_sound_algorithm", &bold_sound_algorithm},
    {L"bold_stack_dump", &bold_stack_dump},
    {L"bother_ground_check", &bother_ground_check},
    {L"bpadlock_HUD_color", &bpadlock_HUD_color},
    {L"bpitch_limiter_for_AI", &bpitch_limiter_for_AI},
    {L"bpower_grid", &bpower_grid},
    {L"bprecision_waypoints", &bprecision_waypoints},
    {L"bput_AI_to_boom", &bput_AI_to_boom},
    {L"bradar_jam_chevrons", &bradar_jam_chevrons},
    {L"bratio_hack", &bratio_hack},
    {L"brealistic_attrition", &brealistic_attrition},
    {L"brealistic_maverick_time", &brealistic_maverick_time}, // Enables realistic Maverick missile gyro spool up time of 3 minutes instead of 5 seconds			
    {L"brebuild_bobble_fix", &brebuild_bobble_fix},
    {L"brecon_latitude_longditude", &brecon_latitude_longditude},
    {L"brequest_help", &brequest_help},
    {L"bresize_uses_resource_manager", &bresize_uses_resource_manager},
    {L"broll_inertia", &broll_inertia}, // Roll Inertia 			
    {L"broll_linked_NWS_rudder", &broll_linked_NWS_rudder}, // Controls wether the Rudder and NWS are linked to the roll input when on the ground			
    {L"bRP5_data_compatiblity", &bRP5_data_compatiblity},
    {L"bRQD_fix", &bRQD_fix},
    {L"bRWR", &bRWR},
    {L"bSAM_2D_3D_handover", &bSAM_2D_3D_handover},
    {L"bscramble", &bscramble}, // Enable Scramble missions			
    {L"bset_waypoint_number_fix", &bset_waypoint_number_fix}, // fix from S.G. which he didn't put in because it was not really tested yet..			
    {L"bshow_flaps", &bshow_flaps},
    {L"bshow_fuel_label", &bshow_fuel_label},
    {L"bshow_maneuver_labels", &bshow_maneuver_labels},
    {L"bshow_MIP_usage", &bshow_MIP_usage},
    {L"bsimple_FM_updates", &bsimple_FM_updates},
    {L"bslow_but_safe", &bslow_but_safe},
    {L"bsmaller_bullseye", &bsmaller_bullseye},
    {L"bsmart_combat_AP", &bsmart_combat_AP},
    {L"bsmart_scaling", &bsmart_scaling},
    {L"bSMS_pylon_loading_fix", &bSMS_pylon_loading_fix}, //All these are control in the UI setup now 			
    {L"bsound_distance_effect", &bsound_distance_effect},
    {L"bsound_dynamic_allocate", &bsound_dynamic_allocate}, // Allocate DSOund buffers on the fly // MLR 12/3/2003 - Not implemented yet			
    {L"bsound_hear_VMS_external", &bsound_hear_VMS_external},
    {L"bsound_sonic_boom", &bsound_sonic_boom},
    {L"bstart_in_3D_pit", &bstart_in_3D_pit}, // start in 3D cockpit			
    {L"bsync_2D_3D_pit", &bsync_2D_3D_pit},
    {L"btakeoff_sound", &btakeoff_sound}, // Enables Takeoff.wav in Camp UI. Defaults to off.			
    {L"btanker_FM_fix", &btanker_FM_fix},
    {L"btanker_waypoints", &btanker_waypoints},
    {L"bTFR_fixes", &bTFR_fixes},
    {L"bTO_LDG_light_fix", &bTO_LDG_light_fix},
    {L"btoggle_AAA_gun_flag", &btoggle_AAA_gun_flag},
    {L"bturbulence", &bturbulence},
    {L"bunlimited_ammunition", &bunlimited_ammunition},
    {L"buse_3D_sound", &buse_3D_sound},
    {L"buse_aggresive_incomplete_A2G", &buse_aggresive_incomplete_A2G},
    {L"buse_analog_idle_cutoff", &buse_analog_idle_cutoff},
    {L"buse_complex_BVR_for_player_AI", &buse_complex_BVR_for_player_AI},
    {L"buse_defined_gun_domain", &buse_defined_gun_domain},
    {L"buse_DX_engine", &buse_DX_engine},
    {L"buse_land_M_tiles", &buse_land_M_tiles},
    {L"buse_mapped_files", &buse_mapped_files},
    {L"buse_MIP_maps", &buse_MIP_maps},
    {L"buse_new_3D_pit", &buse_new_3D_pit}, // Use new 3dpit code - needs new 3d pit model			
    {L"buse_new_can_engage", &buse_new_can_engage},
    {L"buse_new_smoothing", &buse_new_smoothing}, // look above for expl.			
    {L"buse_RC135", &buse_RC135}, // Use the RC-135 for ELINT (radar) ID'ing			
    {L"buse_skill_for_flaks", &buse_skill_for_flaks},
    {L"buse_tanker_track", &buse_tanker_track},
    {L"buse_TE_weather", &buse_TE_weather},
    {L"buser_radio_voice", &buser_radio_voice},
    {L"bvoice_communication", &bvoice_communication},
    {L"bwake_turbulence", &bwake_turbulence},
    {L"bweapon_launch_uses_draw_pointer_position", &bweapon_launch_uses_draw_pointer_position},
    {L"bweapon_pickle_delays", &bweapon_pickle_delays},
    {L"bweapon_step_to_gun", &bweapon_step_to_gun},
    {L"bwoeir", &bwoeir},
    {L"", nullptr}
};


static My_config_option<double> my_double_options[] =
{
    {L"f3D_head_tilt", &f3D_head_tilt}, // Head tilt when entering the 3D cockpit			
    {L"f3D_LMFD_llx", &f3D_LMFD_llx},
    {L"f3D_LMFD_lly", &f3D_LMFD_lly},
    {L"f3D_LMFD_llz", &f3D_LMFD_llz},
    {L"f3D_LMFD_ulx", &f3D_LMFD_ulx},
    {L"f3D_LMFD_uly", &f3D_LMFD_uly},
    {L"f3D_LMFD_ulz", &f3D_LMFD_ulz},
    {L"f3D_LMFD_urx", &f3D_LMFD_urx},
    {L"f3D_LMFD_ury", &f3D_LMFD_ury},
    {L"f3D_LMFD_urz", &f3D_LMFD_urz},
    {L"f3D_pit_FOV", &f3D_pit_FOV}, // FOV when entering the 3D cockpit			
    {L"f3D_RMFD_llx", &f3D_RMFD_llx},
    {L"f3D_RMFD_lly", &f3D_RMFD_lly},
    {L"f3D_RMFD_llz", &f3D_RMFD_llz},
    {L"f3D_RMFD_ulx", &f3D_RMFD_ulx},
    {L"f3D_RMFD_uly", &f3D_RMFD_uly},
    {L"f3D_RMFD_ulz", &f3D_RMFD_ulz},
    {L"f3D_RMFD_urx", &f3D_RMFD_urx},
    {L"f3D_RMFD_ury", &f3D_RMFD_ury},
    {L"f3D_RMFD_urz", &f3D_RMFD_urz},
    {L"fA2G_AGM_altitude", &fA2G_AGM_altitude}, // Sets AI AGM attack altitude			
    {L"fA2G_camera_altitude", &fA2G_camera_altitude}, // Sets AI BDA/Recon altitude			
    {L"fA2G_cluster_altitude", &fA2G_cluster_altitude}, // Sets AI Cluster Bomb attack altitude			
    {L"fA2G_dumb_HD_altitude", &fA2G_dumb_HD_altitude}, // Sets AI Durandal attack altitude			
    {L"fA2G_dumb_LD_altitude", &fA2G_dumb_LD_altitude}, // Sets AI Generic attack altitude			
    {L"fA2G_GBU_altitude", &fA2G_GBU_altitude}, // Sets AI GBU attack altitude			
    {L"fA2G_generic_bomb_altitude", &fA2G_generic_bomb_altitude}, // Sets AI Generic Bomb attack altitude			
    {L"fA2G_gun_rocket_altitude", &fA2G_gun_rocket_altitude}, // Sets AI Gun and Rocket altitude			
    {L"fA2G_HARM_altitude", &fA2G_HARM_altitude}, // Sets AI HARM attack altitude (all set to SP3 defaults)			
    {L"fA2G_JDAM_altitude", &fA2G_JDAM_altitude}, // Sets AI JDAM attack altitude			
    {L"fA2G_JSOW_altitude", &fA2G_JSOW_altitude}, // Sets AI JSOW attack altitude			
    {L"fACMI_animation_record_timer", &fACMI_animation_record_timer}, // seconds between recording a/c animation data 			
    {L"fAF_aileron_left", &fAF_aileron_left},
    {L"fAF_aileron_right", &fAF_aileron_right},
    {L"fAF_elevator_down", &fAF_elevator_down},
    {L"fAF_elevator_up", &fAF_elevator_up},
    {L"fAF_rudder_left", &fAF_rudder_left},
    {L"fAF_rudder_right", &fAF_rudder_right},
    {L"fAF_throttle_down", &fAF_throttle_down},
    {L"fAF_throttle_up", &fAF_throttle_up},
    {L"fAG_flyout_range", &fAG_flyout_range},
    {L"fAG_slow_flyout_range", &fAG_slow_flyout_range},
    {L"fAG_slow_mover_speed", &fAG_slow_mover_speed},
    {L"fAI_drop_store_launcher_range", &fAI_drop_store_launcher_range},
    {L"fAI_HARM_maximum_range", &fAI_HARM_maximum_range},
    {L"fAI_JSOW_maximum_firinrange", &fAI_JSOW_maximum_firinrange},
    {L"fAI_JSOW_maximum_range", &fAI_JSOW_maximum_range},
    {L"fAI_minimum_altitude", &fAI_minimum_altitude},
    {L"fAI_minimum_WP_altitude", &fAI_minimum_WP_altitude},
    {L"fAI_refuel_range", &fAI_refuel_range},
    {L"fAI_refuel_speed", &fAI_refuel_speed},
    {L"fbias_factor_for_flaks", &fbias_factor_for_flaks},
    {L"fbomb_missile_altitude", &fbomb_missile_altitude},
    {L"fbomb_time_step", &fbomb_time_step},	// fix for missing bombs		
    {L"fbutton_scaler", &fbutton_scaler},
    {L"fbutton_Z_scaler", &fbutton_Z_scaler},
    {L"fcarrier_start_tolerance", &fcarrier_start_tolerance},
    {L"fclimb_ratio", &fclimb_ratio},
    {L"fcloud_minimum_height", &fcloud_minimum_height},
    {L"fcloud_thickness_factor", &fcloud_thickness_factor},
    {L"fcursor_speed", &fcursor_speed},
    {L"fDBS1_factor", &fDBS1_factor}, // cursor speed reduction in DBS1			
    {L"fDBS1_scan_rate_factor", &fDBS1_scan_rate_factor},
    {L"fDBS2_factor", &fDBS2_factor}, // cursor speed reduction in DBS2			
    {L"fDBS2_scan_rate_factor", &fDBS2_scan_rate_factor},
    {L"fdefault_FOV", &fdefault_FOV},
    {L"fdpit_start", &fdpit_start}, // in 24 hr clock			
    {L"fdpit_stop", &fdpit_stop}, // in 24 hr clock			
    {L"fdradilution_factor", &fdradilution_factor},
    {L"fdynamic_head_panning_multiplyer", &fdynamic_head_panning_multiplyer},
    {L"fdynamic_head_panning_rate", &fdynamic_head_panning_rate},
    {L"fdynamic_head_roll_multiplyer", &fdynamic_head_roll_multiplyer},
    {L"fdynamic_head_roll_rate", &fdynamic_head_roll_rate},
    {L"fdynamic_head_tilt_G_rate_multiplyer", &fdynamic_head_tilt_G_rate_multiplyer},
    {L"fdynamic_head_tilt_multiplyer", &fdynamic_head_tilt_multiplyer}, // externalized 3d pit dynamic head params			
    {L"fdynamic_head_tilt_random_G_multiplyer", &fdynamic_head_tilt_random_G_multiplyer},
    {L"fdynamic_head_tilt_rate_multiplyer", &fdynamic_head_tilt_rate_multiplyer},
    {L"fe_prop_factor", &fe_prop_factor},
    {L"fEXP_factor", &fEXP_factor}, // cursor speed reduction in EXP			
    {L"fformation_afterburner_distance" , &fformation_afterburner_distance},
    {L"fFOV_increment", &fFOV_increment},
    {L"ffuel_base_prop", &ffuel_base_prop},
    {L"ffuel_multiplyer_prop", &ffuel_multiplyer_prop},
    {L"ffuel_time_step", &ffuel_time_step},
    {L"ffuel_Vt_clip", &ffuel_Vt_clip},
    {L"ffuel_Vt_dot_multiplyer", &ffuel_Vt_dot_multiplyer},
    {L"fGA_look_ahead_time", &fGA_look_ahead_time},
    {L"fGA_pitch_stick_factor", &fGA_pitch_stick_factor},
    {L"fGMT_maximum_speed", &fGMT_maximum_speed},
    {L"fGMT_minimum_speed", &fGMT_minimum_speed},
    {L"fground_impact_mod", &fground_impact_mod},
    {L"fheadinstabilize_factor", &fheadinstabilize_factor},
    {L"fhigh_dragravity_factor", &fhigh_dragravity_factor}, // externalized var to allow tweaking afterwards			
    {L"fhit_chance_air", &fhit_chance_air},
    {L"fhit_chance_ground", &fhit_chance_ground},
    {L"fhot_nose_angle", &fhot_nose_angle},
    {L"fHSD_symbol_size", &fHSD_symbol_size},
    {L"fHUD_only_size", &fHUD_only_size}, // % Size increase of HUD-Only view (% = decimal)			
    {L"fhybrid_pit_threshold1", &fhybrid_pit_threshold1},
    {L"fhybrid_pit_threshold2", &fhybrid_pit_threshold2},
    {L"fident_factor", &fident_factor},
    {L"fJDAM_lift", &fJDAM_lift},
    {L"flatitude", &flatitude},	// is now set by the theater.map readout		
    {L"flethal_radius_modifier", &flethal_radius_modifier},
    {L"fmaverick_EXP_level", &fmaverick_EXP_level},
    {L"fmaverick_FOV_level", &fmaverick_FOV_level},
    {L"fmaximum_FOV", &fmaximum_FOV},
    {L"fmaximum_MARNoIdA", &fmaximum_MARNoIdA},
    {L"fmaximum_MARNoIdB", &fmaximum_MARNoIdB},
    {L"fmean_time_between_failures", &fmean_time_between_failures},
    {L"fMFD_blue", &fMFD_blue},
    {L"fMFD_green", &fMFD_green},
    {L"fMFD_p_size", &fMFD_p_size},
    {L"fMFD_red", &fMFD_red},
    {L"fMFD_transparency", &fMFD_transparency},
    {L"fminimum_cloud_weather",  &fminimum_cloud_weather},
    {L"fminimum_FOV", &fminimum_FOV},
    {L"fminimum_MARNoId18kA", &fminimum_MARNoId18kA},
    {L"fminimum_MARNoId18kB", &fminimum_MARNoId18kB},
    {L"fminimum_MARNoId28kA", &fminimum_MARNoId28kA},
    {L"fminimum_MARNoId28kB", &fminimum_MARNoId28kB},
    {L"fminimum_MARNoId5kA", &fminimum_MARNoId5kA},
    {L"fminimum_MARNoId5kB", &fminimum_MARNoId5kB},
    {L"fminimum_MARNoIdC", &fminimum_MARNoIdC},
    {L"fMIP_LOD_bias", &fMIP_LOD_bias},
    {L"fmouse_look_sensitivity", &fmouse_look_sensitivity},
    {L"fmover_Vr_value", &fmover_Vr_value},
    {L"fnarrow_FOV", &fnarrow_FOV},
    {L"fnuke_damage_mod", &fnuke_damage_mod},
    {L"fnuke_damage_radius", &fnuke_damage_radius},
    {L"fnuke_strength_factor", &fnuke_strength_factor},
    {L"fpadlock_break_distance", &fpadlock_break_distance},
    {L"fpilot_animation_interval", &fpilot_animation_interval}, // Pilot animation act interval (minutes)			
    {L"fpilot_head_move_rate", &fpilot_head_move_rate}, // Pilot animation move rate (deg/sec)			
    {L"fpince_maneuver_points1a", &fpince_maneuver_points1a},
    {L"fpince_maneuver_points1b", &fpince_maneuver_points1b},
    {L"fpince_maneuver_points2a", &fpince_maneuver_points2a},
    {L"fpince_maneuver_points2b", &fpince_maneuver_points2b},
    {L"fpitch_stick_offset", &fpitch_stick_offset},
    {L"fpullup_time", &fpullup_time},
    {L"fradar_scale", &fradar_scale},
    {L"fRAP_distance", &fRAP_distance}, // RollAndPull triggering in MissileEngage			
    {L"frecon_camera_half_FOV", &frecon_camera_half_FOV}, // Recon camera stuff			
    {L"frecon_camera_offset", &frecon_camera_offset}, // Recon camera stuff			
    {L"frecovery_AOA", &frecovery_AOA},
    {L"frocket_pitch_correction", &frocket_pitch_correction},
    {L"frocket_pitch_factor", &frocket_pitch_factor},
    {L"froll_stick_offset", &froll_stick_offset},
    {L"frudder_offset", &frudder_offset},
    {L"fsearch_sim_target_from_range_squerd", &fsearch_sim_target_from_range_squerd},
    {L"fsound_doppler_blend", &fsound_doppler_blend},
    {L"fsound_doppler_factor", &fsound_doppler_factor},
    {L"fsound_roll_off_factor", &fsound_roll_off_factor},
    {L"fSS_offset_maneuver_points1a", &fSS_offset_maneuver_points1a},
    {L"fSS_offset_maneuver_points1b", &fSS_offset_maneuver_points1b},
    {L"fSS_offset_maneuver_points2a", &fSS_offset_maneuver_points2a},
    {L"fSS_offset_maneuver_points2b", &fSS_offset_maneuver_points2b},
    {L"fsun_padlock_timeout", &fsun_padlock_timeout},
    {L"ftanker_backup_distance", &ftanker_backup_distance},
    {L"ftanker_headsup_distance", &ftanker_headsup_distance},
    {L"ftanker_pitch_stick", &ftanker_pitch_stick},
    {L"ftanker_roll_stick", &ftanker_roll_stick},
    {L"ftanker_track_factor", &ftanker_track_factor},
    {L"ftarget_DZ_factor", &ftarget_DZ_factor}, // fix for ballistic missiles			
    {L"ftaxi_early", &ftaxi_early}, // RAS Amount of seconds to taxi early			
    {L"ftex_detail_factor", &ftex_detail_factor}, // Use Higher-Res textures at higher altitudes			
    {L"ftracer_accuracy_factor", &ftracer_accuracy_factor},
    {L"fvisual_normalize_factor", &fvisual_normalize_factor},
    {L"fwaypoint_burner_delta", &fwaypoint_burner_delta},
    {L"fwide_view_FOV", &fwide_view_FOV},
    {L"", nullptr}
};


static My_config_option<signed int> my_int_options[] =
{
    { L"n3D_head_pan_range", &n3D_head_pan_range }, //  split expanded head range
    { L"n3D_head_tilt_range", &n3D_head_tilt_range }, // split expanded head range
    { L"nACMI_options_popup_high_resolution_x", &nACMI_options_popup_high_resolution_x },
    { L"nACMI_options_popup_high_resolution_y", &nACMI_options_popup_high_resolution_y },
    { L"nACMI_options_popup_low_resolution_x", &nACMI_options_popup_low_resolution_x },
    { L"nACMI_options_popup_low_resolution_y", &nACMI_options_popup_low_resolution_y },
    { L"nadjust_taxi_time", &nadjust_taxi_time},
    { L"nAI_shoot_look_shoot_time", &nAI_shoot_look_shoot_time },
    { L"nAI_visual_retention_skill", &nAI_visual_retention_skill },
    { L"nAI_visual_retention_time", &nAI_visual_retention_time },
    { L"nairbase_check", &nairbase_check },
    { L"nairbase_relocation", &nairbase_relocation },
    { L"nATC_taxi_order_fix", &nATC_taxi_order_fix },
    { L"nBW_check_delta_time", &nBW_check_delta_time },
    { L"nBW_maximum_delta_time", &nBW_maximum_delta_time },
    { L"nCAS_attack_time", &nCAS_attack_time },
    { L"nchatter_interval", &nchatter_interval }, // FRB - chatter noise control
    { L"nchoose_bullseye_fix", &nchoose_bullseye_fix },
    { L"ncritical_pullup", &ncritical_pullup }, // AI ground avoidance full pull up threshold
    { L"nday", &nday },
    { L"ndeadzone_huge", &ndeadzone_huge },
    { L"ndeadzone_large", &ndeadzone_large },
    { L"ndeadzone_medium", &ndeadzone_medium },
    { L"ndeadzone_small", &ndeadzone_small },
    { L"ndeagregate_timer", &ndeagregate_timer },
    { L"nDF_regenerate_fix", &nDF_regenerate_fix },
    { L"ndynamic_voices", &ndynamic_voices },
    { L"nFF_effect_auto_center", &nFF_effect_auto_center },
    { L"nflight_visual_bonus", &nflight_visual_bonus },
    { L"nforender_state", &nforender_state },
    { L"nforce_cockpit_resolution", &nforce_cockpit_resolution },
    { L"ngraphics_fix", &ngraphics_fix },
    { L"nground_attack_time", &nground_attack_time },
    { L"nhybrid_pit_mode_delay", &nhybrid_pit_mode_delay },
    { L"nidle_cutoff_pad", &nidle_cutoff_pad },
    { L"nkey_POV_sensitivity_maximum", &nkey_POV_sensitivity_maximum },
    { L"nkey_POV_sensitivity_minimum", &nkey_POV_sensitivity_minimum },
    { L"nloadout_time_limit", &nloadout_time_limit },
    { L"nlook_around_water_tiles", &nlook_around_water_tiles },
    { L"nlow_detail_factor", &nlow_detail_factor },
    { L"nlowest_skill_for_GCI", &nlowest_skill_for_GCI },
    { L"nmaximum_debug_label", &nmaximum_debug_label },
    { L"nmaximum_intercept_distance", &nmaximum_intercept_distance },
    { L"nmaximum_sim_time_acceleration", &nmaximum_sim_time_acceleration },
    { L"nmaximum_UI_refresh", &nmaximum_UI_refresh },
    { L"nmaximum_vertex_space", &nmaximum_vertex_space },
    { L"nminimum_available_aircraft", &nminimum_available_aircraft },
    { L"nminimum_dump", &nminimum_dump },
    { L"nminimum_TACAN_channel", &nminimum_TACAN_channel }, // Theater definition file
    { L"nmissile_fix", &nmissile_fix },
    { L"nmouse_look_sensitivity_maximum", &nmouse_look_sensitivity_maximum },
    { L"nmouse_look_sensitivity_minimum", &nmouse_look_sensitivity_minimum },
    { L"nmouse_wheel_sensitivity_maximum", &nmouse_wheel_sensitivity_maximum },
    { L"nmouse_wheel_sensitivity_minimum", &nmouse_wheel_sensitivity_minimum },
    { L"nMP_power_transmit_threshold", &nMP_power_transmit_threshold },
    { L"nMP_start_time", &nMP_start_time },
    { L"nnear_label_limit", &nnear_label_limit },
    { L"nnew_FPS_counter", &nnew_FPS_counter },
    { L"nno_player_play", &nno_player_play },
    { L"nno_WP_refuel_needed", &nno_WP_refuel_needed },
    { L"nnumber_of_hats", &nnumber_of_hats },
    { L"nnumber_of_subtitles", &nnumber_of_subtitles },
    { L"npadlock_box_size", &npadlock_box_size },
    { L"npadlock_mode", &npadlock_mode },
    { L"npercentage_available_aircraft", &npercentage_available_aircraft },
    { L"nprint_to_file", &nprint_to_file },
    { L"nPS_kill_FPS", &nPS_kill_FPS },
    { L"nPS_purge_interval", &nPS_purge_interval }, // PS list purge interval
    { L"nrampstart_minutes", &nrampstart_minutes },
    { L"nreagregate_timer", &nreagregate_timer },
    { L"nrelocation_wait", &nrelocation_wait },
    { L"nRNE_speed", &nRNE_speed },
    { L"nsaturation_large", &nsaturation_large },
    { L"nsaturation_medium", &nsaturation_medium },
    { L"nsaturation_small", &nsaturation_small },
    { L"nSEAD_attack_time", &nSEAD_attack_time },
    { L"nseason", &nseason },
    { L"nsession_timeout", &nsession_timeout },
    { L"nsession_update_rate", &nsession_update_rate },
    { L"nSFX_LOD_cutoff", &nSFX_LOD_cutoff }, // SFX display limits
    { L"nSFX_LOD_distance_cutoff", &nSFX_LOD_distance_cutoff }, // SFX display limits
    { L"nSFX_LOD_total_cutoff", &nSFX_LOD_total_cutoff }, // SFX display limits 
    { L"nshow_2D_pit_errors", &nshow_2D_pit_errors },
    { L"nshow_debulabels", &nshow_debulabels }, // only by .label chatline input
    { L"nskip_waypoint_time", &nskip_waypoint_time },
    { L"nsound_switch_fix", &nsound_switch_fix },
    { L"nsound_update_MS", &nsound_update_MS },
    { L"nstrike_attack_time", &nstrike_attack_time },
    { L"nsubtitle_TTL", &nsubtitle_TTL },
    { L"ntarget_spot_timeout", &ntarget_spot_timeout },
    { L"ntaxi_launch_time", &ntaxi_launch_time }, // Taxi takeoff time option
    { L"nthrottle_mode", &nthrottle_mode },
    { L"nunidentified_in_UI", &nunidentified_in_UI },
    { L"nVU_maximum_delta_time", &nVU_maximum_delta_time },
    { L"nyear", &nyear },
    { L"", nullptr }
};


static My_config_option<wstring> my_wstring_options[] =
{
    {L"smiddle_button_function", &smiddle_button_function[0]},
    {L"sradio_flight_col", &sradio_flight_col[0]},
    {L"sradio_proximity_col", &sradio_proximity_col[0]},
    {L"sradio_standard_col", &sradio_standard_col[0]},
    {L"sradio_team_col", &sradio_team_col[0]},
    {L"sradio_to_from_package_col", &sradio_to_from_package_col[0]},
    {L"sradio_to_package_col", &sradio_to_package_col[0]},
    {L"sradio_tower_col", &sradio_tower_col[0]},
    {L"sradio_world_col", &sradio_world_col[0]},
    {L"sscroll_down_function", &sscroll_down_function[0]},
    {L"sscroll_up_function", &sscroll_up_function[0]},
    {L"sworld_name", &sworld_name[0]},
    {L"", nullptr}
};


// אובייקטים
// הסדר חשוב כי יש תלות באתחולים של הבנאים.
My_system_requirements my_system_requirements = {};

My_logger my_errors_log_file = {};

My_error my_error_handler = {};

My_coprocessor my_coprocessor = {};

My_config my_configuration_file = {};


wstring my_data_directory = { MY_DATA_DIRECTORY };
wstring my_UI_art_directory = { my_data_directory };
wstring my_UI_art_theater_directory = { my_data_directory };
wstring my_UI_sound_directory = { my_data_directory };
wstring my_sound_theater_directory = { my_data_directory + 
                                       MY_SOUNDS_DIRECTORY };
wstring my_terrain_data_directory = { MY_TERRAIN_DIRECTORY };
wstring my_object_data_directory = { MY_OBJECT_DIRECTORY };
wstring my_threeD_data_directory = { my_object_data_directory };
wstring my_picture_directory = { MY_INVALID_WSTRING };
wstring my_misc_texture_data_directory = { MY_MISC_TEXTURES_DIRECTORY };
wstring my_campaign_save_directory = { MY_INVALID_WSTRING };
wstring my_campaign_user_save_directory = { MY_INVALID_WSTRING };


// HACK לבחון צורך.
HINSTANCE my_h_inst; // current instance
TCHAR szTitle[ MAX_LOADSTRING ]; // The title bar text
TCHAR szWindowClass[ MAX_LOADSTRING ]; // the main window class name
 // סוף משתנים גלובליים.



// הכרזת פונקציות.
void my_initialize_debug_variables(void);
// סוף הכרזת פונקציות.



// הגדרות פונקציות.
// בנאי.
// הדבר הראשון הוא לבדוק התאמה מינימלית לדרישות המערכת.
// לא יכול לדווח שגיאות כי הבנאי של מערכת השגיאות טרם רץ.
My_system_requirements::My_system_requirements(void)
{
    my_check_architecture();

    my_check_compiler_version();

    my_check_POD_sizes();
}


// בודק את ארכיטקטורת המערכת.
void My_system_requirements::my_check_architecture(void)
{
    // ארכיטקטורת 32 ביט ומינימום פנטיום פרו.
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(_M_IX86);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    static_assert( _M_IX86 >= 600,
                  "X86 only" );
}


// בודק גירסת מהדר מינימלית.
void My_system_requirements::my_check_compiler_version(void)
{
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(_M_IX86);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    static_assert( _MSC_VER >= MY_MSVS_VERSION,
                  "Use VS2013 or later" );
}


// בודק שהגדלים של המשתנים הם כפי שמוגדרים לגרסה הנוכחית של ויז'ואל סטודיו.
void My_system_requirements::my_check_POD_sizes(void)
{
    // http://msdn.microsoft.com/en-us/library/cc953fe1(v=vs.140).aspx
    static_assert( 1 == sizeof(bool),
                  "sizeof bool is wrong" );

    static_assert( 1 == sizeof(char),
                  "sizeof char is wrong" );

    static_assert( 2 == sizeof(wchar_t),
                  "sizeof wchar_t is wrong" );

    static_assert( 2 == sizeof(short),
                  "sizeof short is wrong" );

    static_assert( 4 == sizeof(int),
                  "sizeof int is wrong" );

    static_assert( 4 == sizeof(long),
                  "sizeof long is wrong" );

    static_assert( 4 == sizeof(float),
                  "sizeof float is wrong" );

    static_assert( 8 == sizeof(long long),
                  "sizeof long long is wrong" );

    static_assert( 8 == sizeof(double),
                  "sizeof double is wrong" );

    static_assert( 8 == sizeof(long double),
                  "sizeof long double is wrong" );
}


// בנאי
My_logger::My_logger(void)
{
    // מגדיר את השפה כי ברירת המחדל היא באנגלית.
    // ללא שורה זו הקובץ יצא ריק !
    locale::global(locale("Hebrew_Israel.1255"));

    // מאתחל את כל משתני המחלקה.
    my_log_file = {};

    my_log_file_name = {MY_LOG_FILE_FOLDER};

    my_is_log_file_initialized = {false};

    // אין צורך לאתחל קובץ לוג פה. קובץ יאותחל רק בשימוש ראשון.
}


// בנאי
My_error::My_error(void)
{
    // מאתחל את כל משתני המחלקה.
    my_error_stack = {};

    my_parameters_stack = {};

    my_handle_code = {nullptr};

    my_internal_error_counter = {0}; // אין צורך לבדוק טווח.

    my_internal_error = {false};

    my_final_error_wstring = {L""};


    // מבצע בדיקות חיוניות.
    my_check_another_instance();

    my_check_for_memory_leaks();
};


// האם יש עותק נוסף של הסימולטור בזכרון.
void My_error::my_check_another_instance(void)
{
    // מייצר אירוע יחודי.
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(synchapi%2FCreateEventW);k(CreateEventW);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    my_handle_code = {CreateEventW(nullptr,
                                   true,
                                   false,
                                   MY_PROJECTS_NAME_LPCWSTR)};

    // שומר את קוד השגיאה שהחזירה הפונקציה.
    // חייב להיות מיד אחרי הפונקציה ולכן אין בדיקת טווח למשתנה.
    DWORD my_last_error_code = {MY_INVALID_UNSIGNED_INT};

    // http://msdn.microsoft.com/en-us/library/ms679360(v=vs.85).aspx
    my_last_error_code = {GetLastError()};

    // בודק אם הפונקציה נכשלה.
    if ( not my_handle_code )
    {
        // ממיר סוג כי המחסנית היא מסוג שלם.
        signed int my_temp_int = {MY_INVALID_SIGNED_INT};
        my_temp_int = {static_cast<signed int>( my_last_error_code )};

        // דוחף את הודעת השגיאה למחסנית.
        // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(stack%2Fstd%3A%3Astack%3A%3Apush);k(std%3A%3Astack%3A%3Apush);k(push);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
        my_parameters_stack.push({L"יצירת אירוע נכשלה",
                                 my_temp_int});

        // דוחף את נתוני השגיאה למחסנית.
        // אין צורך לדחוף את הסיבה.
        my_error_stack.push({__FILE__,
                            __FUNCTION__,
                            __LINE__});

        // מדווח את השגיאה עם ברירות המחדל שזה להציג ולתעד.
        my_report_error();
    }

    // האם הסימולטור כבר קיים.
    if ( ERROR_ALREADY_EXISTS == my_last_error_code )
    {
        // אין צורך לדחוף את נתוני השגיאה למחסנית.

        my_parameters_stack.push({L"הסימולטור כבר רץ ולכן יסגר",
                                 MY_NOֹ_ERRORֹ_CODE});

        // זו לא באמת שגיאה ולכן אין מה להציג או לתעד.
        my_report_error(My_error::MY_DISPLAY_ERROR::MY_DONT_DISPLAY_ERROR,
                        My_error::MY_LOG_ERROR::MY_DONT_LOG_ERROR);
    }
}


// בודק נזילות זכרון.
void My_error::my_check_for_memory_leaks(void)
{
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(crtdbg%2F_CrtSetBreakAlloc);k(_CrtSetBreakAlloc);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    _CrtSetBreakAlloc(739752); // לא מבין מה משמעות המספר בסוגריים.

    my_error_stack.push({__FILE__,
                         __FUNCTION__,
                         __LINE__,
                         L"my_temp_int"});

    // הכנת דיגלוני השגיאה.
    My_sub_range<signed int,
                 MY_INVALID_SIGNED_INT,
                 MY_MAXIMUM_DEBUG_ENUM> my_temp_int;

    my_temp_int = {_CRTDBG_LEAK_CHECK_DF bitor
                   _CRTDBG_ALLOC_MEM_DF bitor
                   _CRTDBG_DELAY_FREE_MEM_DF bitor
                   0};

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(crtdbg%2F_CrtSetDbgFlag);k(_CrtSetDbgFlag);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    _CrtSetDbgFlag(my_temp_int);

    my_error_stack.pop(); // my_temp_int.
}


// בנאי
My_coprocessor::My_coprocessor(void)
{
    my_error_handler.my_error_stack.push({__FILE__,
                                         __FUNCTION__,
                                         __LINE__});

    my_chop();

    my_error_handler.my_error_stack.pop(); // my_chop.

    my_error_handler.my_error_stack.push({__FILE__,
                                         __FUNCTION__,
                                         __LINE__});

    my_accuracy();

    my_error_handler.my_error_stack.pop(); // my_accuracy.
}


// מקנפג את המעבד המתמאטי לעגל את התוצאה.
void My_coprocessor::my_chop(void)
{
    // לא נעשה שימוש בערך הזה.
    unsigned int my_control_word = {MY_INVALID_UNSIGNED_INT};

    my_error_handler.my_error_stack.push({__FILE__,
                                          __FUNCTION__,
                                          __LINE__,
                                          L"my_errno_t_code"});

    My_sub_range<errno_t,
                 MY_INVALID_SIGNED_INT, 
                 MY_MAXIMUM_ERRNO_T_CODE> my_errno_t_code;

    my_errno_t_code = {MY_INVALID_SIGNED_INT};

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(float%2F_controlfp_s);k(_controlfp_s);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    my_errno_t_code = {_controlfp_s(&my_control_word,
                                    _RC_CHOP,
                                    MCW_RC)};

    if ( my_errno_t_code )
    {
        my_error_handler.my_parameters_stack.push({L"שגיאת עיגול של המעבד המתמטי",
                                                   my_errno_t_code});

        my_error_handler.my_report_error();
    }

    my_error_handler.my_error_stack.pop(); // my_errno_t_code.
}


// דיוק 24 ביט.
void My_coprocessor::my_accuracy(void)
{
    unsigned int my_control_word = {MY_INVALID_UNSIGNED_INT};

    my_error_handler.my_error_stack.push({__FILE__,
                                          __FUNCTION__,
                                          __LINE__,
                                          L"my_errno_t_code"});

    My_sub_range<errno_t,
                 MY_INVALID_SIGNED_INT,
                 MY_MAXIMUM_ERRNO_T_CODE> my_errno_t_code;

    my_errno_t_code = {MY_INVALID_SIGNED_INT};

    my_errno_t_code = {_controlfp_s(&my_control_word,
                                    _PC_24,
                                    MCW_PC)};

    if ( my_errno_t_code )
    {
        my_error_handler.my_parameters_stack.push({L"שגיאת 24 ביט של המעבד המתמטי",
                                                   my_errno_t_code});

        my_error_handler.my_report_error();
    }

    my_error_handler.my_error_stack.pop(); // my_errno_t_code.
}


// בנאי
My_config::My_config(void)
{
    locale::global(locale("Hebrew_Israel.1255"));

    my_config_file = {};
}


// מאתחל הכל.
void my_initialize_everything(void)
{
    my_initialize_debug_variables();

    my_configuration_file.my_read();
}


// מאתחל משתני ניפוי שגיאות.
void my_initialize_debug_variables(void)
{
    // HACK לתקן זאת.
    //my_initialize_debug( MY_DEBUGGER_MODE::MY_TEXT );

#ifndef NEGEVSTORM
    FalconDisplay.displayFullScreen = { FALSE };
#endif
}


// קורא את קובץ התצורה.
void My_config::my_read(void)
{
    my_open();

    my_parse();

    my_close();
}


// קורא את קובץ ההגדרות.
void My_config::my_open(void)
{
    // בונה את הנתיב עם שם הקובץ.
    wstring my_config_file_path = {MY_INVALID_WSTRING};
    my_config_file_path = {my_data_directory};

    my_config_file_path += {MY_CONFIG_FILE_NAME};

    my_error_handler.my_error_stack.push({__FILE__,
                                          __FUNCTION__,
                                          __LINE__,
                                          L"my_mode"});

    My_sub_range< signed int,
                  MY_INVALID_SIGNED_INT,
                  MY_MAXIMUM_WIOS_ENUM> my_mode;

    // קובע את מוד הגישה לקובץ.
    my_mode = {MY_INVALID_SIGNED_INT};
    my_mode = {wios::in};

    // פותח את הקובץ.
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(fStream%2Fstd%3A%3Abasic_ofstream%3A%3Aopen);k(std%3A%3Abasic_ofstream%3A%3Aopen);k(open);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    my_config_file.open(my_config_file_path,
                        my_mode);

    my_error_handler.my_error_stack.pop(); // my_mode.

    // בודק שהקובץ נפתח בהצלחה.
    bool my_temp_bool = {false};
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(fStream%2Fstd%3A%3Abasic_ofstream%3A%3Ais_open);k(std%3A%3Abasic_ofstream%3A%3Ais_open);k(is_open);k(DevLang-C%2B%2B);k(TargetOS-Windows
    my_temp_bool = {my_config_file.is_open()};

    if ( not my_temp_bool )
    {
        // בודק מדוע נכשלה פתיחת הקובץ.
        wstring my_error_code = {MY_INVALID_WSTRING};
        my_error_code = {my_check_flags()};

        my_error_handler.my_error_stack.push({__FILE__,
                                             __FUNCTION__,
                                             __LINE__});

        my_error_handler.my_parameters_stack.push({L"שגיאה בפתיחת קובץ התצורה" + my_error_code,
                                                  MY_NOֹ_ERRORֹ_CODE});

        my_error_handler.my_report_error(My_error::MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR,
                                         My_error::MY_LOG_ERROR::MY_DO_LOG_ERROR);
    }
}


// מפענח את קובץ התצורה.
void My_config::my_parse(void)
{
    // סופר כמה שורות נקראו מהקובץ למקרה של שגיאה.
    my_error_handler.my_error_stack.push({__FILE__,
                                          __FUNCTION__,
                                          __LINE__,
                                          L"my_line_number"});

    My_sub_range<signed int,
                 MY_INVALID_SIGNED_INT,
                 MY_MAXIMUM_CONFIG_FILE_LINES> my_line_number;

// לפה קופצים כדי לקרוא את השורה הבאה.
my_next_line:

    // קורא את הקובץ כל זמן שלא הגענו לסוף הקובץ.
    bool my_is_eof_reached = {false};

    // דבר ראשון זה בדיקה שלא הגענו לסוף הקובץ.
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(fStream%2Fstd%3A%3Abasic_ifstream%3A%3Aeof);k(xiosbase%2Fstd%3A%3Aios_base%3A%3Aeof);k(std%3A%3Abasic_ifstream%3A%3Aeof);k(ios%2Fstd%3A%3Abasic_ios%3A%3Aeof);k(std%3A%3Abasic_ios%3A%3Aeof);k(std%3A%3Aios_base%3A%3Aeof);k(eof);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    my_is_eof_reached = {my_config_file.eof()};

    if ( not my_is_eof_reached )
    {
        // קורא את הקובץ שורה אחר שורה.
        wstring my_command = {MY_INVALID_WSTRING};
        
        // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(string%2Fstd%3A%3Agetline);k(std%3A%3Agetline);k(getline);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
        getline(my_config_file,
                my_command);

        // מקדם את מונה השורות מהקובץ.
        my_line_number++;

        // מדלג על שורות של הערות.
        if ( my_is_comment_line(my_command) )
        {
            goto my_next_line;
        }

        // בודק את אורך השורה שנקראה מהקובץ.
        my_error_handler.my_error_stack.push({__FILE__,
                                             __FUNCTION__,
                                             __LINE__,
                                             L"my_line_length"});

        My_sub_range<unsigned int,
                     MY_INVALID_UNSIGNED_INT,
                     MAX_PATH> my_line_length;

        my_line_length = {my_command.length()};

        // בדיקה אם אורך השורה עומד במינימום הנדרש.
        const unsigned int MY_MINIMUM_ALLOWED_CHARACTERS = {3U};

        if ( my_line_length < MY_MINIMUM_ALLOWED_CHARACTERS )
        {
            my_exit_with_error(my_line_number);
        }

        // קורא את השורה של הערך.
        wstring my_value = {MY_INVALID_WSTRING};

        getline(my_config_file,
                my_value);

        my_line_number++;

        // פה אסור שתהיה הערה.
        if ( my_is_comment_line(my_value) )
        {
            my_exit_with_error(my_line_number);
        }

        // בודק את אורך השורה שנקראה מהקובץ.
        my_line_length = {MY_INVALID_UNSIGNED_INT};
        my_line_length = {my_value.length()};

        // בדיקה אם אורך השורה עומד במינימום הנדרש.
        if ( my_line_length < 1 )
        {
            goto my_next_line;
        }

        my_error_handler.my_error_stack.pop(); // my_line_length.

        // דוגם את התו הראשון בשורה. לפי תו זה ניתן לדעת את סוג המשתנה.
        wchar_t my_first_wchar = {MY_INVALID_WCHAR_T};
        my_first_wchar = {my_command[0]};

        // קורא לפונקציה המתאימה לפי סוג המשתנה.
        bool my_temp_bool = {false};
        my_temp_bool = {my_switch(my_first_wchar,
                                  my_command,
                                  my_value)};

        // קופץ לשורה הבאה או החוצה לפי תוצאת החזרה.
        if ( my_temp_bool )
        {
            my_exit_with_error(my_line_number);
        }
        else
        {
            goto my_next_line;
        }
    }
}


// מדלג על שורות של הערות.
const bool My_config::my_is_comment_line(const wstring& my_line)
{
    wchar_t my_first_wchar = {MY_INVALID_WCHAR_T};

    my_first_wchar = {my_line[0]};

    if ( L'/' == my_first_wchar )
    {
        return true;
    }
    else
    {
        return false;
    }
}


// הסתעפות לפי סוג הפרמטר.
const bool My_config::my_switch(const wchar_t my_first_wchar,
                                const wstring my_command,
                                const wstring my_value)
{
    switch ( my_first_wchar )
    {
        // שלם.
        case L'n':
        {
            bool my_temp_bool = {false};
            my_temp_bool = {my_set_int_options(my_command,
                                               my_value)};

            if ( my_temp_bool )
            {
                return EXIT_FAILURE;
            }
            else
            {
                return EXIT_SUCCESS;
            }
        }
        // עשרוני.
        case L'f':
        {
            bool my_temp_bool = {false};
            my_temp_bool = {my_set_double_options(my_command,
                                                  my_value)};

            if ( my_temp_bool )
            {
                return EXIT_FAILURE;
            }
            else
            {
                return EXIT_SUCCESS;
            }
        }
        // בינארי.
        case L'b':
        {
            bool my_temp_bool = {false};
            my_temp_bool = {my_set_bool_options(my_command,
                                                my_value)};

            if ( my_temp_bool )
            {
                return EXIT_FAILURE;
            }
            else
            {
                return EXIT_SUCCESS;
            }
        }
        // מחרוזת.
        case L's':
        {
            bool my_temp_bool = {false};
            my_temp_bool = {my_set_wstring_options(my_command,
                                                   my_value)};

            if ( my_temp_bool )
            {
                return EXIT_FAILURE;
            }
            else
            {
                return EXIT_SUCCESS;
            }
        }
        // אם הגענו לכאן סימן שהקלט מהקובץ היה שגוי.
        default:
        {
            return EXIT_FAILURE;
        }
    }
}


// מגדיר את אופציות השלמים.
const bool My_config::my_set_int_options(const wstring& my_command,
                                         const wstring& my_value)
{
    // בונה רשימה של כל המשתנים השלמים.
    My_config_option<signed int>* my_player_options = {my_int_options};

    // קורא מהרשימה את שם המשתנה.
    wstring my_temp_wstring = {MY_INVALID_WSTRING};
    my_temp_wstring = {my_player_options->my_parameter_name};

    // לולאה למציאת השם.
    while ( L"" not_eq my_temp_wstring )
    {
        // האם מצאנו את מחרוזת החיפוש.
        if ( my_temp_wstring == my_command )
        {
            signed int my_temp_int = {MY_INVALID_SIGNED_INT};
            size_t* my_index = {nullptr};

            // ממיר ממחרוזת לשלם.
            // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(string%2Fstd%3A%3Astoi);k(std%3A%3Astoi);k(stoi);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
            my_temp_int = {stoi(my_value,
                                my_index)};

            // בודק שההמרה הצליחה.
            if ( my_index )
            {
                return EXIT_FAILURE;
            }

            // שומר את הערך במערך.
            *my_player_options->my_parameter_value = {my_temp_int};

            // סיימנו בהצלחה ולכן אפשר לעבור לשורה הבאה.
            return EXIT_SUCCESS;
        }
        // עוברים למשתנה הבא.
        my_player_options++;

        // קוראים את הערך הבא.
        my_temp_wstring = {MY_INVALID_WSTRING};
        my_temp_wstring = {my_player_options->my_parameter_name};
    }
    // לא מצאנו ולכן זו שגיאה.
    return EXIT_FAILURE;
}


// מגדיר את אופציות השברים.
const bool My_config::my_set_double_options(const wstring& my_command,
                                            const wstring& my_value)
{
    My_config_option<double>* my_player_options = {my_double_options};

    wstring my_temp_wstring = {MY_INVALID_WSTRING};
    my_temp_wstring = {my_player_options->my_parameter_name};

    while ( L"" not_eq my_temp_wstring )
    {
        if ( my_temp_wstring == my_command )
        {
            double my_temp_double = {MY_INVALID_DOUBLE};
            size_t* my_index = {nullptr};

            // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(string%2Fstd%3A%3Astof);k(std%3A%3Astof);k(stof);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
            my_temp_double = {stof(my_value,
                                   my_index)};

            if ( my_index )
            {
                return EXIT_FAILURE;
            }

            *my_player_options->my_parameter_value = {my_temp_double};

            return EXIT_SUCCESS;
        }
        my_player_options++;

        my_temp_wstring = {MY_INVALID_WSTRING};
        my_temp_wstring = {my_player_options->my_parameter_name};
    }
    return EXIT_FAILURE;
}


// מגדיר את אופציות הדגלים.
const bool My_config::my_set_bool_options(const wstring& my_command,
                                          const wstring& my_value)
{
    My_config_option<bool>* my_player_options = {my_bool_options};

    wstring my_temp_wstring = {MY_INVALID_WSTRING};
    my_temp_wstring = {my_player_options->my_parameter_name};

    while ( L"" not_eq my_temp_wstring )
    {
        if ( my_temp_wstring == my_command )
        {
            signed int my_temp_int = {MY_INVALID_SIGNED_INT};
            size_t* my_index = {nullptr};

            // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(string%2Fstd%3A%3Astoi);k(std%3A%3Astoi);k(stoi);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
            my_temp_int = {stoi(my_value,
                                my_index)};

            if ( my_index )
            {
                return EXIT_FAILURE;
            }

            if ( my_temp_int )
            {
                *my_player_options->my_parameter_value = {true};
            }
            else
            {
                *my_player_options->my_parameter_value = {false};
            }
            return EXIT_SUCCESS;
        }
        my_player_options++;

        my_temp_wstring = {MY_INVALID_WSTRING};
        my_temp_wstring = {my_player_options->my_parameter_name};
    }
    return EXIT_FAILURE;
}


// מגדיר את אופציות המחרוזות.
const bool My_config::my_set_wstring_options(const wstring& my_command,
                                             const wstring& my_value)
{
    My_config_option<wstring>* my_player_options = {my_wstring_options};

    wstring my_temp_wstring = {MY_INVALID_WSTRING};
    my_temp_wstring = {my_player_options->my_parameter_name};

    while ( L"" not_eq my_temp_wstring )
    {
        if ( my_temp_wstring == my_command )
        {
            *my_player_options->my_parameter_value = {my_value};

            return EXIT_SUCCESS;
        }
        my_player_options++;

        my_temp_wstring = {MY_INVALID_WSTRING};
        my_temp_wstring = {my_player_options->my_parameter_name};
    }
    return EXIT_FAILURE;
}


// סוגר את קובץ התצורה.
void My_config::my_close(void)
{
    // מאפס את דיגלוני השגיאה.
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(fStream%2Fstd%3A%3Abasic_ifstream%3A%3Aclear);k(istream%2Fstd%3A%3Abasic_istream%3A%3Aclear);k(std%3A%3Abasic_ifstream%3A%3Aclear);k(ios%2Fstd%3A%3Abasic_ios%3A%3Aclear);k(std%3A%3Abasic_istream%3A%3Aclear);k(std%3A%3Abasic_ios%3A%3Aclear);k(clear);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    my_config_file.clear();

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(fStream%2Fstd%3A%3Abasic_ofstream%3A%3Aclose);k(std%3A%3Abasic_ofstream%3A%3Aclose);k(close);k(D
    my_config_file.close(); // כדי שנוכל להוסיף טקסט מאוחר יותר.

    // בודק אם הסגירה הצליחה.
    bool my_temp_bool = {false};
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(fStream%2Fstd%3A%3Abasic_ofstream%3A%3Agood);k(xiosbase%2Fstd%3A%3Aios_base%3A%3Agood);k(std%3A%
    my_temp_bool = {my_config_file.good()};

    if ( not my_temp_bool )
    {
        wstring my_error_code = {MY_INVALID_WSTRING};
        my_error_code = {my_check_flags()};

        my_error_handler.my_error_stack.push({__FILE__,
                                             __FUNCTION__,
                                             __LINE__});

        my_error_handler.my_parameters_stack.push({L"סגירת קובץ תצורה נכשלה" + my_error_code,
                                                  MY_NOֹ_ERRORֹ_CODE});

        my_error_handler.my_report_error(My_error::MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR,
                                         My_error::MY_LOG_ERROR::MY_DO_LOG_ERROR);
    }
}


// יוצא עם הודעת שגיאה.
void My_config::my_exit_with_error(const signed int my_line_number)
{
    my_error_handler.my_error_stack.pop(); // my_line_number.

    my_error_handler.my_error_stack.push({__FILE__,
                                         __FUNCTION__,
                                         __LINE__,
                                         L"my_error_reading_config"});

    my_error_reading_config(my_line_number);
}


// שגיאה בקריאת קובץ התצורה.
void My_config::my_error_reading_config(const signed int my_line_number)
{
    my_error_handler.my_parameters_stack.push({L"שגיאה בקריאת קובץ התצורה בשורה",
                                              my_line_number});

    my_error_handler.my_report_error(My_error::MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR,
                                     My_error::MY_LOG_ERROR::MY_DO_LOG_ERROR);
}


// בודק דיגלוני שגיאות של קובץ.
const wstring My_config::my_check_flags(void)
{
    // מוסיף את דיגלוני השגיאות.
    wstring my_error_code = {MY_INVALID_WSTRING};

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(fStream%2Fstd%3A%3Abasic_ofstream%3A%3Abad);k(xiosbase%2Fstd%3A%3Aios_base%3A%3Abad);k(std%3A%3Abasic_ofstream%3A%3Abad);k(ios%2Fstd%3A%
    if ( my_config_file.bad() )
    {
        my_error_code = {L" BAD "};
    }

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(fStream%2Fstd%3A%3Abasic_ofstream%3A%3Aeof);k(xiosbase%2Fstd%3A%3Aios_base%3A%3Aeof);k(std%3A%3Abasic_ofstream%3A%3Aeof);k(ios%2Fstd%3A%3Abasic_ios%3A%3Aeof);k(std%3A%3Abasic_ios%3A%3Aeof);k(std%3A%3Aios_base%3A%3Aeof);k(eof);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    if ( my_config_file.eof() )
    {
        my_error_code += { L" EOF " };
    }

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(fStream%2Fstd%3A%3Abasic_ofstream%3A%3Afail);k(xiosbase%2Fstd%3A%3Aios_base%3A%3Afail);k(std%3A%3Abasic_ofstream%3A%3Afail);k(ios%2Fstd%3A%3Abasic_ios%3A%3Afail);k(std%3A%3Abasic_ios%3A%3Afail);k(std%3A%3Aios_base%3A%3Afail);k(fail);k(DevLang-C%2B%2B);k(TargetOS-Windows)&
    if ( my_config_file.fail() )
    {
        my_error_code += { L" FAIL " };
    }

    return my_error_code;
}


// מצפצף, מציג הודעת שגיאה ויוצא.
// ברירת המחדל היא להציג את השגיאה ולתעד אותה בקובץ הלוג.
void My_error::my_report_error(MY_DISPLAY_ERROR my_display_error,
                               MY_LOG_ERROR my_log_error)
{
    // האם כבר קרתה שגיאה פנימית.
    if ( my_internal_error and
        // אם השגיאה קרתה במנגנון הלוג, ניתן עדיין להסתפק בהצגתה.
        MY_LOG_ERROR::MY_DO_LOG_ERROR == my_log_error )
    {
        my_catastrophic_error();
    }

    my_internal_error = {true}; // כל שגיאה מעכשיו היא שגיאה פנימית ולכן לא ניתן לדווח אותה.

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(winuser%2FMessageBeep);k(MessageBeep);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    MessageBeep(MB_ICONERROR); // לא חשוב לבדוק קוד חזרה.

    // אם רוצים להציג הודעת שגיאה מפורטת, צריך להכין אותה. אם לא, הצגה ויציאה.
    if ( MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR == my_display_error )
    {
        my_display_error_message();

        // אם רוצים לשמור לקובץ הלוג, צריך להכין אותו. אם לא ממשיכים להצגה.
        if ( MY_LOG_ERROR::MY_DO_LOG_ERROR == my_log_error )
        {
            // עדכון פרטי השגיאה בקובץ הלוג.
            my_errors_log_file.my_update(my_final_error_wstring);
        }

        my_add_contact_information();
    }
    else
    {
        // כל מה שצריך הוא לשלוף את הודעת השגיאה מהמחסנית ולאפס אותה.
        my_final_error_wstring += { my_parameters_stack.top().my_error_message };

        my_parameters_stack.pop();
    }

    my_error_is_ready_for_display();

    my_close_application();
}


// מציג את הודעת השגיאה.
void My_error::my_display_error_message(void)
{
    bool my_is_stack_empty = {false};

    // לולאה שרצה כל זמן שמחסנית השגיאות מלאה.
    do
    {
        my_internal_error_counter = {1}; // קוד שגיאה יחודי לכל נקודה בה עלולה לקרות שגיאה.

        my_error_stack.push({__FILE__,
                            __FUNCTION__,
                            __LINE__,
                            L"my_input_value"});

        My_sub_range<signed int,
            MY_INVALID_SIGNED_INT,
            MY_MAXIMUM_SYSTEM_DWORD_ERROR_CODE> my_input_value;

        // הוצאת נתוני השגיאה מתוך המחסנית.
        // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(stack%2Fstd%3A%3Astack%3A%3Aempty);k(std%3A%3Astack%3A%3Aempty);k(empty);k(DevLang-C%2B%2B);k(TargetOS-W
        my_is_stack_empty = {my_parameters_stack.empty()};

        if ( not my_is_stack_empty )
        {
            // https://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(stack%2Fstd%3A%3Astack%3A%3Atop);k(std%3A%3Astack%3A%3Atop);k(top);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
            my_final_error_wstring += { my_parameters_stack.top().my_error_message };

            my_input_value = {my_parameters_stack.top().my_error_code};

            // מוסיף רווח הפרדה בין מילים.
            my_add_space(my_final_error_wstring);
        }

        // ממיר את ערך הכניסה ממספר למחרוזת לרחבה.
        wstring my_temp_wstring = {MY_INVALID_WSTRING};

        // שגיאה שהיא 0 לא מעניינת.
        if ( my_input_value )
        {
            // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(string%2Fstd%3A%3Ato_wstring);k(std%3A%3Ato_wstring);k(to_wstring);k(DevLang-C%2B%2B
            my_temp_wstring = {to_wstring(my_input_value)};

            my_final_error_wstring += {my_temp_wstring};

            // מוסיף שורת הפרדה בין משפטים.
            my_add_line(my_final_error_wstring);
        }

        // סיימנו עם המשתנה אז אפשר להוציא אותו מהמחסנית.
        my_error_stack.pop(); // my_input_value.

                              // הוצאת נתוני השגיאה מתוך המחסנית.
        string my_temp_string = {MY_INVALID_STRING};
        my_temp_string = {my_error_stack.top().my_source_code_file_name};

        // אין צורך לבדוק טווח כי זה משתנה מערכת.
        signed int my_temp_int = {MY_INVALID_SIGNED_INT};
        my_temp_int = {my_error_stack.top().my_source_code_line_number};

        string my_temp_string2 = {MY_INVALID_STRING};
        my_temp_string2 = {my_error_stack.top().my_function_signature};

        // מוסיף את שם הקובץ בו קרתה השגיאה.
        my_final_error_wstring += {L"בקובץ "};

        // ממיר את שם הקובץ ממחרוזת למחרוזת רחבה.
        my_temp_wstring = {MY_INVALID_WSTRING};

        my_internal_error_counter = {2};

        my_temp_wstring = {my_string_to_wstring(my_temp_string)};

        my_final_error_wstring += {my_temp_wstring};

        my_add_line(my_final_error_wstring);

        // מוסיף את מספר השורה בה קרתה השגיאה.
        my_final_error_wstring += {L"בשורה "};

        my_temp_wstring = {MY_INVALID_WSTRING};
        my_temp_wstring = {to_wstring(my_temp_int)};

        my_final_error_wstring += {my_temp_wstring};

        my_add_line(my_final_error_wstring);

        // מוסיף את שם הפונקציה בה קרתה השגיאה.
        my_final_error_wstring += {L"בפונקציה "};

        my_temp_wstring = {MY_INVALID_WSTRING};

        my_internal_error_counter = {3};

        my_temp_wstring = {my_string_to_wstring(my_temp_string2)};

        my_final_error_wstring += {my_temp_wstring};

        my_add_line(my_final_error_wstring);

        // מוסיף שורת רווח בין בלוקים של שגיאה.
        my_add_line(my_final_error_wstring);

        my_error_stack.pop(); // פונקציית כניסה.

                              // כדי למנוע ניסיון שליפה כשהמחסנית כבר ריקה.
        if ( not my_is_stack_empty )
        {
            my_parameters_stack.pop();
        }

        my_is_stack_empty = {my_error_stack.empty()};
    }

    while ( not my_is_stack_empty );
}


// מוסיף סוף שורה למחרוזת.
void My_error::my_add_line(wstring& my_input_wstring)
{
    my_input_wstring += {L"\n"};
}


// ממיר מחרוזת ליוניקוד.
const wstring My_error::my_string_to_wstring(const string& my_input_string)
{
    basic_string <char>::const_iterator my_input_string_begin = {};

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(xstring%2Fstd%3A%3Abasic_string%3A%3Abegin);k(std%3A%3Abasic_string%3A%3Abegin);k(be
    my_input_string_begin = {my_input_string.begin()};

    basic_string <char>::const_iterator my_input_string_end = {};

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(xstring%2Fstd%3A%3Abasic_string%3A%3Aend);k(std%3A%3Abasic_string%3A%3Aend);k(end);k
    my_input_string_end = {my_input_string.end()};

    my_error_stack.push({__FILE__,
                        __FUNCTION__,
                        __LINE__,
                        L"my_temp_UINT"});

    My_sub_range<unsigned int,
        MY_INVALID_UNSIGNED_INT,
        MAX_PATH> my_temp_UINT;

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(xstring%2Fstd%3A%3Abasic_string%3A%3Alength);k(std%3A%3Abasic_string%3A%3Alength);k(length);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    my_temp_UINT = {my_input_string.length()};

    // מייצר מספיק רווחים שיספיקו לתוצאה לפי אורך המחרוזת.
    wstring my_output_wstring(my_temp_UINT,
                              L' ');

    my_error_stack.pop(); // my_temp_UINT.

    basic_string <wchar_t>::iterator my_output_string_begin = {};

    my_output_string_begin = {my_output_wstring.begin()};

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(xutility%2Fstd%3A%3Acopy);k(std%3A%3Acopy);k(copy);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    // מעתיק את מחרוזת הכניסה ליציאה מההתחלה עד הסוף.
    copy(my_input_string_begin,
         my_input_string_end,
         my_output_string_begin);

    return my_output_wstring;
}


// מוסיף את פרטי יצירת הקשר.
void My_error::my_add_contact_information()
{
    // פרטי יצירת קשר כדי שאוכל לתקן את השגיאה.
    my_error_handler.my_final_error_wstring += {L"שלח בבקשה את פרטי השגיאה לכתובת"};

    my_add_line(my_error_handler.my_final_error_wstring);

    my_error_handler.my_final_error_wstring += {MY_DEVELOPERS_EMAIL_ADDRESS};
}


// השגיאה מוכנה להצגה.
void My_error::my_error_is_ready_for_display(void)
{
    // הכנת התצוגה לישור לימין.
    my_internal_error_counter = {8};

    my_error_stack.push({__FILE__,
                        __FUNCTION__,
                        __LINE__,
                        L"my_temp_UINT"});

    My_sub_range<UINT,
        MY_INVALID_UNSIGNED_INT,
        MY_MAXIMUM_MESSAGE_BOX_UINT> my_temp_UINT;

    my_temp_UINT = {MY_MESSAGE_BOX_UINT};
    // המרת סוג המחרוזת לסוג של ווינדוס.

    LPCWSTR my_temp_LPCWSTR = {MY_INVALID_LPCWSTR};
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(xstring%2Fstd%3A%3Abasic_string%3A%3Ac_str);k(std%3A%3Abasic_string%3A%3Ac_str);k(c_str);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true

    my_temp_LPCWSTR = {my_final_error_wstring.c_str()};

    // אין טעם לבדוק קוד חזרה.
    MessageBoxW(nullptr,
                my_temp_LPCWSTR,
                nullptr,
                my_temp_UINT);

    // מנקה את הנתון האחרון שנותר במחסנית.
    my_error_stack.pop(); // my_temp_UINT.
}


// יציאה עקב תקלה במנגנון דיווח השגיאות.
void My_error::my_catastrophic_error(void)
{
    // השגיאה קרתה במנגנון התצוגה ולכן היא קטסטרופלית.
    wstring my_temp_wstring = {MY_INVALID_WSTRING};
    my_temp_wstring = {to_wstring(my_internal_error_counter)};

    my_final_error_wstring = {MY_INTERNAL_ERROR_MESSAGE_LPCWSTR};
    my_final_error_wstring += {my_temp_wstring};

    LPCWSTR my_temp_LPCWSTR = {MY_INVALID_LPCWSTR};
    my_temp_LPCWSTR = {my_final_error_wstring.c_str()};

    // מציג הודעת שגיאה בסיסית ויוצא.
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(winuser%2FMessageBoxW);k(MessageBoxW);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    MessageBoxW(nullptr,
                my_temp_LPCWSTR,
                nullptr,
                MY_MESSAGE_BOX_UINT);

    my_close_application();
}


// מעדכן תוכן בקובץ הלוג.
void My_logger::my_update(const wstring& my_error_wstring)
{
    // אתחול קובץ הלוג.
    my_errors_log_file.my_initialize();

    my_error_handler.my_internal_error_counter = {7};

    my_error_handler.my_error_stack.push({__FILE__,
                                         __FUNCTION__,
                                         __LINE__,
                                         L"my_mode"});

    // מוד פתיחת הקובץ הוא הוספה לקיים.
    My_sub_range<signed int,
        MY_INVALID_SIGNED_INT,
        MY_MAXIMUM_WIOS_ENUM> my_mode;

    my_mode = {wios::out bitor
        wios::app};

    my_open(my_mode);

    my_error_handler.my_error_stack.pop(); // mode.

    my_write(my_error_wstring); // כותב את מחרוזת פרטי השגיאה.

    my_close();
}


// יוצר את קובץ הלוג עם כותרת, תאריך ושעה.
void My_logger::my_initialize(void)
{
    // בדיקה אם קובץ הלוג מוכן לשימוש, כלומר מאותחל.
    bool my_temp_bool = {false};

    my_temp_bool = {my_is_initialized()};
    if ( my_temp_bool )
    {
        return;
    }

    my_create_log_file_name();

    my_write_to_log_file();

    my_is_log_file_initialized = {true}; // כעת הקובץ מאותחל ומוכן לשימוש.
}


// האם הלוג אותחל.
const bool My_logger::my_is_initialized(void)
{
    return my_is_log_file_initialized;
}


// מייצר את מחרוזת שם הקובץ מהתאריך והשעה.
void My_logger::my_create_log_file_name(void)
{
    // בניית המבנה שמחזיק את רכיבי התאריך והשעה.
    struct tm my_current_time = {};

    my_create_time_struct(my_current_time);

    // בניית היום.
    my_error_handler.my_internal_error_counter = {5};

    my_error_handler.my_error_stack.push({__FILE__,
                                         __FUNCTION__,
                                         __LINE__,
                                         L"my_date_time_digits"});

    My_sub_range<signed int,
        MY_INVALID_SIGNED_INT,
        MY_MAXIMUM_YEAR> my_date_time_digits;

    my_date_time_digits = {my_current_time.tm_mday};

    // הוספת אפס אם המספר קטן מ-10.
    my_add_leading_zero(my_date_time_digits);

    // הוספת קו מפריד בין חלקי התאריך והשעה.
    my_add_dash(my_log_file_name);

    signed int my_temp_int = {MY_INVALID_SIGNED_INT};
    my_temp_int = {my_date_time_digits};

    my_add_month(my_temp_int,
                 my_current_time);

    my_date_time_digits = {my_temp_int};
    my_temp_int = {MY_INVALID_SIGNED_INT};

    my_add_year(my_temp_int,
                my_current_time);

    my_date_time_digits = {my_temp_int};
    my_temp_int = {MY_INVALID_SIGNED_INT};

    my_add_hour(my_temp_int,
                my_current_time);

    my_date_time_digits = {my_temp_int};
    my_temp_int = {MY_INVALID_SIGNED_INT};

    my_add_minutes(my_temp_int,
                   my_current_time);

    my_date_time_digits = {my_temp_int};
    my_temp_int = {MY_INVALID_SIGNED_INT};

    my_add_seconds(my_temp_int,
                   my_current_time);

    my_date_time_digits = {my_temp_int};

    my_error_handler.my_error_stack.pop(); // my_date_time_digits.

                                           // הוספת סיומת שם הקובץ.
    my_log_file_name += {MY_LOG_FILE_EXTENSION};
}


// יצירת מחרוזת השעה והתאריך כעת מורכבת מזמן יחסי.
void My_logger::my_create_time_struct(struct tm& my_current_time)
{
    __time32_t my_seconds_since_1970 = {MY_INVALID_SIGNED_INT};

    // http://msdn.microsoft.com/en-us/library/1f4c8f33.aspx
    _time32(&my_seconds_since_1970);

    const signed int MY_TIME21_ERROR = {-1};
    if ( MY_TIME21_ERROR == my_seconds_since_1970 )
    {
        my_error_handler.my_parameters_stack.push({L"שגיאה בחישוב הזמן",
                                                  MY_NOֹ_ERRORֹ_CODE}); // אין קוד שגיאה להצגה.

        my_error_handler.my_error_stack.push({__FILE__,
                                             __FUNCTION__,
                                             __LINE__});

        my_error_handler.my_report_error(My_error::MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR,
                                         My_error::MY_LOG_ERROR::MY_DONT_LOG_ERROR); // כי אנחנו כבר בתוך התיעוד.
    }

    my_error_handler.my_internal_error_counter = {4};

    my_error_handler.my_error_stack.push({__FILE__,
                                         __FUNCTION__,
                                         __LINE__,
                                         L"my_errno_t_code"});

    My_sub_range<errno_t,
        MY_INVALID_SIGNED_INT,
        MY_MAXIMUM_ERRNO_T_CODE> my_errno_t_code;

    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(time%2F_localtime32_s);k(_localtime32_s);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    my_errno_t_code = {_localtime32_s(&my_current_time,
                                      &my_seconds_since_1970)};

    if ( my_errno_t_code )
    {
        my_error_handler.my_error_stack.push({__FILE__,
                                             __FUNCTION__,
                                             __LINE__});

        my_error_handler.my_parameters_stack.push({L"שגיאה בהמרת הזמן",
                                                  my_errno_t_code});

        my_error_handler.my_report_error(My_error::MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR,
                                         My_error::MY_LOG_ERROR::MY_DONT_LOG_ERROR);
    }

    my_error_handler.my_error_stack.pop(); // my_errno_t_code.
}


// מוסיף 0 למספר.
void My_logger::my_add_leading_zero(const signed int my_date_time_digits)
{
    if ( my_date_time_digits < 10 )
    {
        my_log_file_name += {L"0"};
    }

    // הוספת המספר למחרוזת שם קובץ הלוג.
    wstring my_temp_wstring = {MY_INVALID_WSTRING};

    my_temp_wstring = {to_wstring(my_date_time_digits)};

    my_log_file_name += {my_temp_wstring};
}


// מוסיף מקף למחרוזת.
void My_logger::my_add_dash(wstring& my_input_wstring)
{
    my_input_wstring += {L"-"};
}


// הוספת החודש.
void My_logger::my_add_month(signed int& my_date_time_digits,
                             const tm my_current_time)
{
    my_date_time_digits = {MY_INVALID_SIGNED_INT};

    my_date_time_digits = {my_current_time.tm_mon};

    my_date_time_digits++; // מפני שהפונקציה מחזירה חודש מבוסס אפס.

    my_add_leading_zero(my_date_time_digits);

    my_add_dash(my_log_file_name);
}


// הוספת השנה.
void My_logger::my_add_year(signed int& my_date_time_digits,
                            const tm my_current_time)
{
    my_date_time_digits = {MY_INVALID_SIGNED_INT};

    my_date_time_digits = {my_current_time.tm_year};

    const signed int MY_YEARֹ_CONVERSION_ֹBIAS = {1900};

    my_date_time_digits += MY_YEARֹ_CONVERSION_ֹBIAS; // מפני שהפונקציה מחזירה מספר נמוך.

    wstring my_temp_wstring = {MY_INVALID_WSTRING};

    my_temp_wstring = {to_wstring(my_date_time_digits)};

    my_log_file_name += {my_temp_wstring};

    // הוספת רווח בין התאריך לשעה.
    my_error_handler.my_add_space(my_log_file_name);
}


// מוסיף רווח למחרוזת.
void My_error::my_add_space(wstring& my_input_wstring)
{
    my_input_wstring += {L" "};
}


// הוספת השעה.
void My_logger::my_add_hour(signed int& my_date_time_digits,
                            const tm my_current_time)
{
    my_date_time_digits = {MY_INVALID_SIGNED_INT};

    my_date_time_digits = {my_current_time.tm_hour};

    my_add_leading_zero(my_date_time_digits);

    my_add_dash(my_log_file_name);
}


// הוספת הדקות.
void My_logger::my_add_minutes(signed int& my_date_time_digits,
                               const tm my_current_time)
{
    my_date_time_digits = {MY_INVALID_SIGNED_INT};

    my_date_time_digits = {my_current_time.tm_min};

    my_add_leading_zero(my_date_time_digits);

    my_add_dash(my_log_file_name);
}


// הוספת השניות.
void My_logger::my_add_seconds(signed int& my_date_time_digits,
                               const tm my_current_time)
{
    my_date_time_digits = {MY_INVALID_SIGNED_INT};

    my_date_time_digits = {my_current_time.tm_sec};

    my_add_leading_zero(my_date_time_digits);
}


// מנהל את תהליך הכתיבה לקובץ.
void My_logger::my_write_to_log_file()
{
    my_error_handler.my_internal_error_counter = {6};

    // קביעת מוד פתיחת הקובץ לאיפוס קובץ קיים.
    my_error_handler.my_error_stack.push({__FILE__,
                                         __FUNCTION__,
                                         __LINE__,
                                         L"my_mode"});

    My_sub_range<signed int,
        MY_INVALID_SIGNED_INT,
        MY_MAXIMUM_WIOS_ENUM> my_mode;

    // http://msdn.microsoft.com/en-us/library/vstudio/71hd1fc0(v=vs.120).aspx
    my_mode = {wios::out bitor
        wios::trunc};

    my_open(my_mode); // פותח את הקובץ לפי המוד הרצוי.

    my_error_handler.my_error_stack.pop(); // my_mode.

    my_write(MY_LOG_FILE_HEADER); // כותב את הכותרת לקובץ.

    my_close(); // סוגר את קובץ הלוג.
}


// פותח את קובץ הלוג.
void My_logger::my_open(const signed int my_mode)
{
    my_log_file.open(my_log_file_name,
                     my_mode);

    // בודק האם הפתיחה אכן הצליחה.
    bool my_temp_bool = {false};

    my_temp_bool = {my_log_file.is_open()};

    if ( not my_temp_bool )
    {
        // בודק פרטנית איזה דגלון שגיאה קפץ.
        wstring my_error_code = {MY_INVALID_WSTRING};
        my_error_code = {my_check_flags()};

        my_error_handler.my_parameters_stack.push({L"שגיאה בפתיחת קובץ הלוג" + my_error_code,
                                                  MY_NOֹ_ERRORֹ_CODE});

        my_error_handler.my_error_stack.push({__FILE__,
                                             __FUNCTION__,
                                             __LINE__});

        my_error_handler.my_report_error(My_error::MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR,
                                         My_error::MY_LOG_ERROR::MY_DONT_LOG_ERROR);
    }
}


// בודק דיגלוני שגיאות של קובץ.
const wstring My_logger::my_check_flags(void)
{
    // בונה מחרוזת רחבה של כל דיגלוני השגיאה שקפצו.
    wstring my_error_code = {L""};

    if ( my_log_file.bad() )
    {
        my_error_code = {L" BAD "};
    }

    if ( my_log_file.eof() )
    {
        my_error_code += { L" EOF " };
    }

    if ( my_log_file.fail() )
    {
        my_error_code += { L" FAIL " };
    }

    return my_error_code;
}


// כותב לקובץ הרישום.
void My_logger::my_write(const wstring& my_error_wstring)
{
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(ostream%2Fstd%3A%3Aendl);k(std%3A%3Aendl);k(endl);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    my_log_file << my_error_wstring << endl;

    // בודק שהכתיבה הצליחה.
    bool my_temp_bool = {false};

    my_temp_bool = {my_log_file.good()};

    if ( not my_temp_bool )
    {
        wstring my_error_code = {MY_INVALID_WSTRING};
        my_error_code = {my_check_flags()};

        my_error_handler.my_parameters_stack.push({L"כתיבה לקובץ הלוג נכשלה" + my_error_code,
                                                  MY_NOֹ_ERRORֹ_CODE});

        my_error_handler.my_error_stack.push({__FILE__,
                                             __FUNCTION__,
                                             __LINE__});

        my_error_handler.my_report_error(My_error::MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR,
                                         My_error::MY_LOG_ERROR::MY_DONT_LOG_ERROR);
    }
}


// סוגר את קובץ הלוג.
void My_logger::my_close(void)
{
    my_log_file.close(); // כדי שנוכל להוסיף טקסט מאוחר יותר.

                         // בודק שהסגירה הצליחה.
    bool my_temp_bool = {false};
    my_temp_bool = {my_log_file.good()};

    if ( not my_temp_bool )
    {
        wstring my_error_code = {MY_INVALID_WSTRING};
        my_error_code = {my_check_flags()};

        my_error_handler.my_parameters_stack.push({L"שגיאה בסגירת קובץ הלוג" + my_error_code,
                                                  MY_NOֹ_ERRORֹ_CODE});

        my_error_handler.my_error_stack.push({__FILE__,
                                             __FUNCTION__,
                                             __LINE__});

        my_error_handler.my_report_error(My_error::MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR,
                                         My_error::MY_LOG_ERROR::MY_DONT_LOG_ERROR);
    }
}


// סוגר את הישום בצורה מסודרת.
void My_error::my_close_application(void)
{
    // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(handleapi%2FCloseHandle);k(CloseHandle);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
    // אין צורך לבדוק קוד חזרה כי גם ככה יוצאים.
    CloseHandle(my_handle_code); // משחרר את המשאב.

                                 // יציאה עם קוד שגיאה שמסמן כישלון.
    exit(EXIT_FAILURE);
}


//
//  FUNCTION: MyRegisterClass()
//
//  PURPOSE: Registers the window class.
//
ATOM register_class(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

    wcex.cbSize = { sizeof( WNDCLASSEX ) };

    wcex.style = { CS_HREDRAW bitor 
                   CS_VREDRAW };

    wcex.lpfnWndProc = { window_process };
    wcex.cbClsExtra = { 0 };
    wcex.cbWndExtra = { 0 };
    wcex.hInstance = { hInstance };

    wcex.hIcon = { LoadIcon( hInstance,
                             MAKEINTRESOURCE( IDI_NEGEVSTORM ) ) };

    wcex.hCursor = { LoadCursor( nullptr,
                                 IDC_ARROW ) };

    wcex.hbrBackground = { ( HBRUSH )( COLOR_WINDOW + 1 ) };

    wcex.lpszMenuName = { MAKEINTRESOURCE( IDC_NEGEVSTORM ) };

    wcex.lpszClassName = { szWindowClass };

    wcex.hIconSm = { LoadIcon( wcex.hInstance,
                               MAKEINTRESOURCE( IDI_NEGEVSTORM ) ) };

	return RegisterClassEx(&wcex);
}


//
//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL initialize_instance(HINSTANCE hInstance, int nCmdShow)
{
   HWND hWnd;

   my_h_inst = { hInstance }; // Store instance handle in our global variable

   hWnd = { CreateWindow( szWindowClass,
                          szTitle,
                          WS_OVERLAPPEDWINDOW,
                          CW_USEDEFAULT,
                          0,
                          CW_USEDEFAULT,
                          0,
                          nullptr,
                          nullptr,
                          hInstance,
                          nullptr ) };

   if (not hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, 
              nCmdShow);

   UpdateWindow(hWnd);

   return TRUE;
}


//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE:  Processes messages for the main window.
//
//  WM_PAINT	- Paint the main window
//  WM_DESTROY	- post a quit message and return
//
//
LRESULT CALLBACK window_process(HWND hWnd, 
                                UINT message, 
                                WPARAM wParam, 
                                LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message)
	{
	case WM_PAINT:
        hdc = { BeginPaint( hWnd,
                            &ps ) };

        // TODO: Add any drawing code here...
		EndPaint(hWnd, 
                 &ps);
		
        break;
	case WM_DESTROY:
		PostQuitMessage(0);
		
        break;
	default:
		return DefWindowProc(hWnd, 
                             message,
                             wParam, 
                             lParam);
	}
    return EXIT_SUCCESS;
}


// אין צורך בפונקציה הזאת אם אנחנו רצים כחלק מפריפלקון.
#ifdef NEGEVSTORM
// נקודת הכניסה לפרויקט.
// http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(negevstorm%2FwWinMain);k(wWinMain);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
signed int WINAPI WinMain(_In_ const HINSTANCE my_instance,
                               _In_opt_ const HINSTANCE my_previous_instance,
                               _In_ const LPTSTR my_command_line,
                               _In_ const signed int my_main_window_mode)
{
    UNREFERENCED_PARAMETER(my_previous_instance); // לא בשימוש.
    UNREFERENCED_PARAMETER(my_command_line); // לא בשימוש.

    my_initialize_everything(); // בדיקות ואתחולים.

                                // TODO: Place code here.
    MSG windows_message;
    HACCEL accelerators_table;

    // Initialize global strings
    LoadString(my_instance,
               IDS_APP_TITLE,
               szTitle,
               MAX_LOADSTRING);

    LoadString(my_instance,
               IDC_NEGEVSTORM,
               szWindowClass,
               MAX_LOADSTRING);

    register_class(my_instance);

    // Perform application initialization:
    if ( not initialize_instance(my_instance,
        my_main_window_mode) )
    {
        return FALSE;
    }

    accelerators_table = {LoadAccelerators(my_instance,
                                           MAKEINTRESOURCE(IDC_NEGEVSTORM))};

    // Main message loop:
    while ( GetMessage(&windows_message,
                       nullptr,
                       0,
                       0) )
    {
        if ( not TranslateAccelerator(windows_message.hwnd,
            accelerators_table,
            &windows_message) )
        {
            TranslateMessage(&windows_message);

            DispatchMessage(&windows_message);
        }
    }

    return (int) windows_message.wParam;
}
#endif //  NEGEVSTORM
// סוף הגדרות פונקציות.