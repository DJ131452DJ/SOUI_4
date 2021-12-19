//stamp:2df010fbd7ea461e
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				xml_init = _T("UIDEF:xml_init");
			}
			const TCHAR * xml_init;
		}UIDEF;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
				template_cpp = _T("values:template");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
			const TCHAR * template_cpp;
		}values;
		class _ICON{
			public:
			_ICON(){
				ICON_0 = _T("ICON:ICON_0");
				ICON_LOGO = _T("ICON:ICON_LOGO");
				ICON_MM_ONLINE = _T("ICON:ICON_MM_ONLINE");
				ICON_MM_OFFLINE = _T("ICON:ICON_MM_OFFLINE");
				ICON_Loading1 = _T("ICON:ICON_Loading1");
				ICON_Loading2 = _T("ICON:ICON_Loading2");
				ICON_Loading3 = _T("ICON:ICON_Loading3");
				ICON_Loading4 = _T("ICON:ICON_Loading4");
				ICON_Loading5 = _T("ICON:ICON_Loading5");
				ICON_Loading6 = _T("ICON:ICON_Loading6");
			}
			const TCHAR * ICON_0;
			const TCHAR * ICON_LOGO;
			const TCHAR * ICON_MM_ONLINE;
			const TCHAR * ICON_MM_OFFLINE;
			const TCHAR * ICON_Loading1;
			const TCHAR * ICON_Loading2;
			const TCHAR * ICON_Loading3;
			const TCHAR * ICON_Loading4;
			const TCHAR * ICON_Loading5;
			const TCHAR * ICON_Loading6;
		}ICON;
		class _CURSOR{
			public:
			_CURSOR(){
				ANI_ARROW = _T("CURSOR:ANI_ARROW");
				CUR_TST = _T("CURSOR:CUR_TST");
			}
			const TCHAR * ANI_ARROW;
			const TCHAR * CUR_TST;
		}CURSOR;
		class _SMENU{
			public:
			_SMENU(){
				menu_test = _T("SMENU:menu_test");
				menu_lv = _T("SMENU:menu_lv");
			}
			const TCHAR * menu_test;
			const TCHAR * menu_lv;
		}SMENU;
		class _SMENUEX{
			public:
			_SMENUEX(){
				menu_tray = _T("SMENUEX:menu_tray");
			}
			const TCHAR * menu_tray;
		}SMENUEX;
		class _LAYOUT{
			public:
			_LAYOUT(){
				page_ctrls = _T("LAYOUT:page_ctrls");
				maindlg = _T("LAYOUT:maindlg");
				page_layout = _T("LAYOUT:page_layout");
				page_skia = _T("LAYOUT:page_skia");
				page_misc = _T("LAYOUT:page_misc");
				page_webkit = _T("LAYOUT:page_webkit");
				page_about = _T("LAYOUT:page_about");
				page_animator = _T("LAYOUT:page_animator");
				treectrl = _T("LAYOUT:treectrl");
				page_script = _T("LAYOUT:page_script");
				dlg_formatmsg = _T("LAYOUT:dlg_formatmsg");
				template_calendar = _T("LAYOUT:template_calendar");
				dlg_skiatext = _T("LAYOUT:dlg_skiatext");
				page_treeview = _T("LAYOUT:page_treeview");
				dlg_set_skin = _T("LAYOUT:dlg_set_skin");
				dlg_tip = _T("LAYOUT:dlg_tip");
				dlg_wrap_content = _T("LAYOUT:dlg_wrap_content");
				page_ani3 = _T("LAYOUT:page_ani3");
				xml_love = _T("LAYOUT:xml_love");
			}
			const TCHAR * page_ctrls;
			const TCHAR * maindlg;
			const TCHAR * page_layout;
			const TCHAR * page_skia;
			const TCHAR * page_misc;
			const TCHAR * page_webkit;
			const TCHAR * page_about;
			const TCHAR * page_animator;
			const TCHAR * treectrl;
			const TCHAR * page_script;
			const TCHAR * dlg_formatmsg;
			const TCHAR * template_calendar;
			const TCHAR * dlg_skiatext;
			const TCHAR * page_treeview;
			const TCHAR * dlg_set_skin;
			const TCHAR * dlg_tip;
			const TCHAR * dlg_wrap_content;
			const TCHAR * page_ani3;
			const TCHAR * xml_love;
		}LAYOUT;
		class _IMGX{
			public:
			_IMGX(){
				qrbg = _T("IMGX:qrbg");
				img_busy = _T("IMGX:img_busy");
				btn_expand = _T("IMGX:btn_expand");
				jpg_bkgnd = _T("IMGX:jpg_bkgnd");
				png_page_icons = _T("IMGX:png_page_icons");
				png_small_icons = _T("IMGX:png_small_icons");
				webbtn_back = _T("IMGX:webbtn_back");
				webbtn_forward = _T("IMGX:webbtn_forward");
				webbtn_refresh = _T("IMGX:webbtn_refresh");
				png_treeicon = _T("IMGX:png_treeicon");
				png_menu_border = _T("IMGX:png_menu_border");
				png_vscroll = _T("IMGX:png_vscroll");
				png_hscroll = _T("IMGX:png_hscroll");
				png_tab_left = _T("IMGX:png_tab_left");
				png_tab_left_splitter = _T("IMGX:png_tab_left_splitter");
				png_tab_main = _T("IMGX:png_tab_main");
				btn_menu = _T("IMGX:btn_menu");
				png_propswitch = _T("IMGX:png_propswitch");
				png_animode = _T("IMGX:png_animode");
				png_chrome_tab_new = _T("IMGX:png_chrome_tab_new");
				png_chrome_tab_close = _T("IMGX:png_chrome_tab_close");
				png_lcex_header = _T("IMGX:png_lcex_header");
				png_lcex_header_arrow = _T("IMGX:png_lcex_header_arrow");
				png_lcex_selectrange = _T("IMGX:png_lcex_selectrange");
				png_icon1 = _T("IMGX:png_icon1");
				png_icon2 = _T("IMGX:png_icon2");
				png_icon3 = _T("IMGX:png_icon3");
				png_icon4 = _T("IMGX:png_icon4");
				png_icon5 = _T("IMGX:png_icon5");
				png_icon6 = _T("IMGX:png_icon6");
				png_icon7 = _T("IMGX:png_icon7");
				png_star1 = _T("IMGX:png_star1");
				png_install = _T("IMGX:png_install");
				png_mask = _T("IMGX:png_mask");
				png_avatar = _T("IMGX:png_avatar");
				png_img_bk = _T("IMGX:png_img_bk");
				png_btn_skin = _T("IMGX:png_btn_skin");
				tip_bg = _T("IMGX:tip_bg");
				message = _T("IMGX:message");
				contacts = _T("IMGX:contacts");
				group = _T("IMGX:group");
				btn_skin1_png = _T("IMGX:btn_skin1_png");
				icons_png = _T("IMGX:icons.png");
				btn_catetory_png = _T("IMGX:btn_catetory.png");
				png_girl = _T("IMGX:png_girl");
				png_love = _T("IMGX:png_love");
				png_soui = _T("IMGX:png_soui");
			}
			const TCHAR * qrbg;
			const TCHAR * img_busy;
			const TCHAR * btn_expand;
			const TCHAR * jpg_bkgnd;
			const TCHAR * png_page_icons;
			const TCHAR * png_small_icons;
			const TCHAR * webbtn_back;
			const TCHAR * webbtn_forward;
			const TCHAR * webbtn_refresh;
			const TCHAR * png_treeicon;
			const TCHAR * png_menu_border;
			const TCHAR * png_vscroll;
			const TCHAR * png_hscroll;
			const TCHAR * png_tab_left;
			const TCHAR * png_tab_left_splitter;
			const TCHAR * png_tab_main;
			const TCHAR * btn_menu;
			const TCHAR * png_propswitch;
			const TCHAR * png_animode;
			const TCHAR * png_chrome_tab_new;
			const TCHAR * png_chrome_tab_close;
			const TCHAR * png_lcex_header;
			const TCHAR * png_lcex_header_arrow;
			const TCHAR * png_lcex_selectrange;
			const TCHAR * png_icon1;
			const TCHAR * png_icon2;
			const TCHAR * png_icon3;
			const TCHAR * png_icon4;
			const TCHAR * png_icon5;
			const TCHAR * png_icon6;
			const TCHAR * png_icon7;
			const TCHAR * png_star1;
			const TCHAR * png_install;
			const TCHAR * png_mask;
			const TCHAR * png_avatar;
			const TCHAR * png_img_bk;
			const TCHAR * png_btn_skin;
			const TCHAR * tip_bg;
			const TCHAR * message;
			const TCHAR * contacts;
			const TCHAR * group;
			const TCHAR * btn_skin1_png;
			const TCHAR * icons_png;
			const TCHAR * btn_catetory_png;
			const TCHAR * png_girl;
			const TCHAR * png_love;
			const TCHAR * png_soui;
		}IMGX;
		class _img_calendar2{
			public:
			_img_calendar2(){
				png_skin_btn_semiarc = _T("img_calendar2:png_skin_btn_semiarc");
				png_skin_btn_curve = _T("img_calendar2:png_skin_btn_curve");
				png_line_1px = _T("img_calendar2:png_line_1px");
				png_radio_button = _T("img_calendar2:png_radio_button");
				cal_arrow_left = _T("img_calendar2:cal_arrow_left");
				cal_arrow_right = _T("img_calendar2:cal_arrow_right");
				cal_btn_day = _T("img_calendar2:cal_btn_day");
			}
			const TCHAR * png_skin_btn_semiarc;
			const TCHAR * png_skin_btn_curve;
			const TCHAR * png_line_1px;
			const TCHAR * png_radio_button;
			const TCHAR * cal_arrow_left;
			const TCHAR * cal_arrow_right;
			const TCHAR * cal_btn_day;
		}img_calendar2;
		class _img_dock{
			public:
			_img_dock(){
				PNG_MAINBK = _T("img_dock:PNG_MAINBK");
				PNG_ICON_1 = _T("img_dock:PNG_ICON_1");
				PNG_ICON_2 = _T("img_dock:PNG_ICON_2");
				PNG_ICON_3 = _T("img_dock:PNG_ICON_3");
				PNG_ICON_4 = _T("img_dock:PNG_ICON_4");
				PNG_ICON_5 = _T("img_dock:PNG_ICON_5");
				PNG_ICON_6 = _T("img_dock:PNG_ICON_6");
				PNG_ICON_7 = _T("img_dock:PNG_ICON_7");
				PNG_ICON_8 = _T("img_dock:PNG_ICON_8");
				PNG_ICON_9 = _T("img_dock:PNG_ICON_9");
				PNG_ICON_10 = _T("img_dock:PNG_ICON_10");
			}
			const TCHAR * PNG_MAINBK;
			const TCHAR * PNG_ICON_1;
			const TCHAR * PNG_ICON_2;
			const TCHAR * PNG_ICON_3;
			const TCHAR * PNG_ICON_4;
			const TCHAR * PNG_ICON_5;
			const TCHAR * PNG_ICON_6;
			const TCHAR * PNG_ICON_7;
			const TCHAR * PNG_ICON_8;
			const TCHAR * PNG_ICON_9;
			const TCHAR * PNG_ICON_10;
		}img_dock;
		class _img_game{
			public:
			_img_game(){
				img_coin = _T("img_game:img_coin");
				gif_win = _T("img_game:gif_win");
				gif_horse = _T("img_game:gif_horse");
			}
			const TCHAR * img_coin;
			const TCHAR * gif_win;
			const TCHAR * gif_horse;
		}img_game;
		class _img_clock{
			public:
			_img_clock(){
				background = _T("img_clock:background");
				pointer_hour = _T("img_clock:pointer_hour");
				pointer_minute = _T("img_clock:pointer_minute");
				pointer_second = _T("img_clock:pointer_second");
			}
			const TCHAR * background;
			const TCHAR * pointer_hour;
			const TCHAR * pointer_minute;
			const TCHAR * pointer_second;
		}img_clock;
		class _bkimg{
			public:
			_bkimg(){
				skin_pic_0 = _T("bkimg:skin_pic_0");
				skin_pic_1 = _T("bkimg:skin_pic_1");
				skin_pic_2 = _T("bkimg:skin_pic_2");
				skin_pic_3 = _T("bkimg:skin_pic_3");
				skin_pic_4 = _T("bkimg:skin_pic_4");
				skin_pic_5 = _T("bkimg:skin_pic_5");
				skin_pic_6 = _T("bkimg:skin_pic_6");
				skin_pic_7 = _T("bkimg:skin_pic_7");
				skin_pic_8 = _T("bkimg:skin_pic_8");
				skin_pic_9 = _T("bkimg:skin_pic_9");
				skin_pic_10 = _T("bkimg:skin_pic_10");
				skin_pic_11 = _T("bkimg:skin_pic_11");
				skin_pic_12 = _T("bkimg:skin_pic_12");
				skin_pic_13 = _T("bkimg:skin_pic_13");
				skin_pic_14 = _T("bkimg:skin_pic_14");
				skin_pic_15 = _T("bkimg:skin_pic_15");
				skin_pic_16 = _T("bkimg:skin_pic_16");
				skin_pic_17 = _T("bkimg:skin_pic_17");
			}
			const TCHAR * skin_pic_0;
			const TCHAR * skin_pic_1;
			const TCHAR * skin_pic_2;
			const TCHAR * skin_pic_3;
			const TCHAR * skin_pic_4;
			const TCHAR * skin_pic_5;
			const TCHAR * skin_pic_6;
			const TCHAR * skin_pic_7;
			const TCHAR * skin_pic_8;
			const TCHAR * skin_pic_9;
			const TCHAR * skin_pic_10;
			const TCHAR * skin_pic_11;
			const TCHAR * skin_pic_12;
			const TCHAR * skin_pic_13;
			const TCHAR * skin_pic_14;
			const TCHAR * skin_pic_15;
			const TCHAR * skin_pic_16;
			const TCHAR * skin_pic_17;
		}bkimg;
		class _GIF{
			public:
			_GIF(){
				gif_penguin = _T("GIF:gif_penguin");
			}
			const TCHAR * gif_penguin;
		}GIF;
		class _apng{
			public:
			_apng(){
				apng_haha = _T("apng:apng_haha");
			}
			const TCHAR * apng_haha;
		}apng;
		class _rtf{
			public:
			_rtf(){
				rtf_test = _T("rtf:rtf_test");
			}
			const TCHAR * rtf_test;
		}rtf;
		class _lua{
			public:
			_lua(){
				lua_test = _T("lua:lua_test");
			}
			const TCHAR * lua_test;
		}lua;
		class _translator{
			public:
			_translator(){
				lang_cn = _T("translator:lang_cn");
			}
			const TCHAR * lang_cn;
		}translator;
		class _flash{
			public:
			_flash(){
				apple_swf = _T("flash:apple.swf");
			}
			const TCHAR * apple_swf;
		}flash;
		class _ImgTrayMenu{
			public:
			_ImgTrayMenu(){
				circulation = _T("ImgTrayMenu:circulation");
				ilike = _T("ImgTrayMenu:ilike");
				next = _T("ImgTrayMenu:next");
				pause = _T("ImgTrayMenu:pause");
				play = _T("ImgTrayMenu:play");
				pre = _T("ImgTrayMenu:pre");
				volume = _T("ImgTrayMenu:volume");
				menu_ico = _T("ImgTrayMenu:menu_ico");
			}
			const TCHAR * circulation;
			const TCHAR * ilike;
			const TCHAR * next;
			const TCHAR * pause;
			const TCHAR * play;
			const TCHAR * pre;
			const TCHAR * volume;
			const TCHAR * menu_ico;
		}ImgTrayMenu;
		class _anim{
			public:
			_anim(){
				love = _T("anim:love");
				slide_show = _T("anim:slide_show");
				slide_hide = _T("anim:slide_hide");
				rotate = _T("anim:rotate");
				anihost = _T("anim:anihost");
				scale_in = _T("anim:scale_in");
				scale_out = _T("anim:scale_out");
				alpha_in = _T("anim:alpha_in");
				alpha_out = _T("anim:alpha_out");
			}
			const TCHAR * love;
			const TCHAR * slide_show;
			const TCHAR * slide_hide;
			const TCHAR * rotate;
			const TCHAR * anihost;
			const TCHAR * scale_in;
			const TCHAR * scale_out;
			const TCHAR * alpha_in;
			const TCHAR * alpha_out;
		}anim;
		class _valueAni{
			public:
			_valueAni(){
				alphaAni = _T("valueAni:alphaAni");
				colorAni = _T("valueAni:colorAni");
			}
			const TCHAR * alphaAni;
			const TCHAR * colorAni;
		}valueAni;
		class _svg{
			public:
			_svg(){
				tiger = _T("svg:tiger");
			}
			const TCHAR * tiger;
		}svg;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"3d_test",65680},
		{L"_name_start",65535},
		{L"album",65584},
		{L"ani_test",65567},
		{L"artist",65583},
		{L"btn4_1",65608},
		{L"btn4_2",65609},
		{L"btn4_3",65610},
		{L"btn4_4",65611},
		{L"btn4_5",65612},
		{L"btn4_6",65613},
		{L"btnSelectGif",65695},
		{L"btn_ani_hostwnd",65734},
		{L"btn_animator",65729},
		{L"btn_append_msg",65589},
		{L"btn_builtinskin",51},
		{L"btn_close",65725},
		{L"btn_create_by_temp",65660},
		{L"btn_createchildren",65668},
		{L"btn_display",65657},
		{L"btn_filewnd",65667},
		{L"btn_hidetst",65658},
		{L"btn_icon",65572},
		{L"btn_init_listbox",65628},
		{L"btn_insert_gif",0},
		{L"btn_lrc",65595},
		{L"btn_menu",65654},
		{L"btn_msgbox",65593},
		{L"btn_next_month",65713},
		{L"btn_open_wrap_content",65659},
		{L"btn_pick_month_cancel",65721},
		{L"btn_pick_month_finish",65722},
		{L"btn_prev_month",65711},
		{L"btn_richedit_open",65590},
		{L"btn_richedit_save",65591},
		{L"btn_run",65706},
		{L"btn_set_prop_value",65632},
		{L"btn_skin",65653},
		{L"btn_start_notify_thread",65683},
		{L"btn_stop_notify_thread",65684},
		{L"btn_test",65575},
		{L"btn_text",65573},
		{L"btn_tip",65597},
		{L"btn_today",65715},
		{L"btn_uninstall",65569},
		{L"btn_webkit_back",65689},
		{L"btn_webkit_fore",65690},
		{L"btn_webkit_go",65693},
		{L"btn_webkit_refresh",65691},
		{L"btn_year_next",65720},
		{L"btn_year_prev",65719},
		{L"cbx_in_lv",65576},
		{L"cbx_interpolator",65696},
		{L"cbx_test",65626},
		{L"chk_mclv_sel",65552},
		{L"chromeTab",65686},
		{L"clock_main",65681},
		{L"col1",65553},
		{L"col2",65558},
		{L"col3",65561},
		{L"col4",65563},
		{L"col5",65565},
		{L"col6",65568},
		{L"color2.1",65644},
		{L"container",65547},
		{L"ctrl_flash",65656},
		{L"ctrl_hk1",65586},
		{L"ctrl_hk2",65587},
		{L"edit_drop_bottom",65666},
		{L"edit_drop_top",65665},
		{L"edit_repeat",65709},
		{L"edit_rotate",65673},
		{L"edit_scale",65674},
		{L"edit_skew",65675},
		{L"edit_spin",65594},
		{L"edit_translate",65676},
		{L"edit_url",65692},
		{L"edit_xml",65669},
		{L"flag_win",400},
		{L"fmw_test",65682},
		{L"game_canvas",65699},
		{L"game_toolbar",65705},
		{L"game_wnd",300},
		{L"gif_test",1000},
		{L"giftest",65694},
		{L"gl_catalog",65543},
		{L"group1",65634},
		{L"group2",65640},
		{L"group_months",65717},
		{L"group_years",65718},
		{L"img_file_icon",65579},
		{L"img_girl",65731},
		{L"img_icon",65554},
		{L"img_indicator",65548},
		{L"img_round",65596},
		{L"img_skin_0",10},
		{L"img_skin_1",11},
		{L"img_skin_10",19},
		{L"img_skin_11",20},
		{L"img_skin_12",21},
		{L"img_skin_13",22},
		{L"img_skin_14",23},
		{L"img_skin_15",24},
		{L"img_skin_16",25},
		{L"img_skin_17",26},
		{L"img_skin_18",27},
		{L"img_skin_2",12},
		{L"img_skin_4",13},
		{L"img_skin_5",14},
		{L"img_skin_6",15},
		{L"img_skin_7",16},
		{L"img_skin_8",17},
		{L"img_skin_9",18},
		{L"img_soui",65728},
		{L"ip_test",65588},
		{L"lasttime",65585},
		{L"lb_test",65627},
		{L"lc_test",65570},
		{L"lv_test_fix",65574},
		{L"lv_test_fix_horz",65571},
		{L"lv_test_flex",65577},
		{L"lv_test_tile",65578},
		{L"matrix_test",65672},
		{L"mclv_test",65550},
		{L"mclv_test_header",65551},
		{L"menu_btn_cir",65540},
		{L"menu_btn_ilike",65539},
		{L"menu_btn_next",65538},
		{L"menu_btn_play",65537},
		{L"menu_btn_pre",65536},
		{L"menu_btn_vol",65541},
		{L"menu_slider_vol",65542},
		{L"mp_test",65623},
		{L"musiclist",65580},
		{L"mytree",65698},
		{L"option2.1",65641},
		{L"page_button",112},
		{L"page_calendar",115},
		{L"page_edit",108},
		{L"page_fix_height_listview",102},
		{L"page_flex_height_listview",103},
		{L"page_hotkey",109},
		{L"page_ipctrl",110},
		{L"page_listbox",117},
		{L"page_listctrl",101},
		{L"page_mclistview",100},
		{L"page_mclistview_ex",105},
		{L"page_progress",114},
		{L"page_property",118},
		{L"page_radio_button",113},
		{L"page_richedit",111},
		{L"page_splitwnd",116},
		{L"page_tileview",104},
		{L"page_treectrl",106},
		{L"page_treeview",107},
		{L"pane_left",65730},
		{L"panel_calendar",65710},
		{L"panel_month_picker",65716},
		{L"playbtn",65582},
		{L"player_1",65700},
		{L"player_2",65701},
		{L"player_3",65702},
		{L"player_4",65703},
		{L"prog_ring",65621},
		{L"prog_test",65615},
		{L"prog_test2",65618},
		{L"prop_prop",65630},
		{L"prop_target",65629},
		{L"prop_test",65633},
		{L"prop_value",65631},
		{L"pv_test",65664},
		{L"radio3_1",65602},
		{L"radio3_2",65603},
		{L"radio3_3",65604},
		{L"radio3_4",65605},
		{L"radio3_5",65606},
		{L"radio3_6",65607},
		{L"radio_1",65598},
		{L"radio_2",65599},
		{L"radio_3",65600},
		{L"radio_4",65601},
		{L"rating_score",65559},
		{L"re_gifhost",65592},
		{L"re_notifycenter",65685},
		{L"re_temp_input",65661},
		{L"re_xmlinput",65708},
		{L"rotate_x",65677},
		{L"rotate_y",65678},
		{L"rotate_z",65679},
		{L"sb_test1",65617},
		{L"sb_test2",65620},
		{L"size2.1",65642},
		{L"slider_test",65616},
		{L"slider_test2",65619},
		{L"songname",65581},
		{L"split_col",65625},
		{L"split_row",65624},
		{L"tab_ctrls",65549},
		{L"tab_main",65655},
		{L"tab_radio2",65614},
		{L"text1.1",65635},
		{L"text1.1.1",65637},
		{L"text1.1.2",65638},
		{L"text1.1.3",65636},
		{L"text1.2",65639},
		{L"text2.1",65645},
		{L"text2.2",65643},
		{L"text2.3",65646},
		{L"text2.4",65647},
		{L"text2.5",65648},
		{L"text2.6",65649},
		{L"text2.7",65650},
		{L"text2.8",65651},
		{L"tgl_left",65733},
		{L"tgl_switch",65546},
		{L"timepicker",65622},
		{L"title",65544},
		{L"tree_test",65732},
		{L"tree_view_00",65723},
		{L"txt_coins",65707},
		{L"txt_desc",65556},
		{L"txt_index",65557},
		{L"txt_installtime",65564},
		{L"txt_label",65545},
		{L"txt_month",65712},
		{L"txt_name",65555},
		{L"txt_path_length",65663},
		{L"txt_rate",65704},
		{L"txt_red",65724},
		{L"txt_score",65560},
		{L"txt_size",65562},
		{L"txt_tip",65726},
		{L"txt_title",65652},
		{L"txt_usetime",65566},
		{L"view_interpolator",65697},
		{L"webkit_toolbar",65688},
		{L"wke_test",65687},
		{L"wnd_ani_host",65727},
		{L"wnd_calendar",65714},
		{L"wnd_container",65670},
		{L"wnd_rgn",65671},
		{L"wnd_temp_host",65662}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			name_3d_test = namedXmlID[0].strName;
			_name_start = namedXmlID[1].strName;
			album = namedXmlID[2].strName;
			ani_test = namedXmlID[3].strName;
			artist = namedXmlID[4].strName;
			btn4_1 = namedXmlID[5].strName;
			btn4_2 = namedXmlID[6].strName;
			btn4_3 = namedXmlID[7].strName;
			btn4_4 = namedXmlID[8].strName;
			btn4_5 = namedXmlID[9].strName;
			btn4_6 = namedXmlID[10].strName;
			btnSelectGif = namedXmlID[11].strName;
			btn_ani_hostwnd = namedXmlID[12].strName;
			btn_animator = namedXmlID[13].strName;
			btn_append_msg = namedXmlID[14].strName;
			btn_builtinskin = namedXmlID[15].strName;
			btn_close = namedXmlID[16].strName;
			btn_create_by_temp = namedXmlID[17].strName;
			btn_createchildren = namedXmlID[18].strName;
			btn_display = namedXmlID[19].strName;
			btn_filewnd = namedXmlID[20].strName;
			btn_hidetst = namedXmlID[21].strName;
			btn_icon = namedXmlID[22].strName;
			btn_init_listbox = namedXmlID[23].strName;
			btn_insert_gif = namedXmlID[24].strName;
			btn_lrc = namedXmlID[25].strName;
			btn_menu = namedXmlID[26].strName;
			btn_msgbox = namedXmlID[27].strName;
			btn_next_month = namedXmlID[28].strName;
			btn_open_wrap_content = namedXmlID[29].strName;
			btn_pick_month_cancel = namedXmlID[30].strName;
			btn_pick_month_finish = namedXmlID[31].strName;
			btn_prev_month = namedXmlID[32].strName;
			btn_richedit_open = namedXmlID[33].strName;
			btn_richedit_save = namedXmlID[34].strName;
			btn_run = namedXmlID[35].strName;
			btn_set_prop_value = namedXmlID[36].strName;
			btn_skin = namedXmlID[37].strName;
			btn_start_notify_thread = namedXmlID[38].strName;
			btn_stop_notify_thread = namedXmlID[39].strName;
			btn_test = namedXmlID[40].strName;
			btn_text = namedXmlID[41].strName;
			btn_tip = namedXmlID[42].strName;
			btn_today = namedXmlID[43].strName;
			btn_uninstall = namedXmlID[44].strName;
			btn_webkit_back = namedXmlID[45].strName;
			btn_webkit_fore = namedXmlID[46].strName;
			btn_webkit_go = namedXmlID[47].strName;
			btn_webkit_refresh = namedXmlID[48].strName;
			btn_year_next = namedXmlID[49].strName;
			btn_year_prev = namedXmlID[50].strName;
			cbx_in_lv = namedXmlID[51].strName;
			cbx_interpolator = namedXmlID[52].strName;
			cbx_test = namedXmlID[53].strName;
			chk_mclv_sel = namedXmlID[54].strName;
			chromeTab = namedXmlID[55].strName;
			clock_main = namedXmlID[56].strName;
			col1 = namedXmlID[57].strName;
			col2 = namedXmlID[58].strName;
			col3 = namedXmlID[59].strName;
			col4 = namedXmlID[60].strName;
			col5 = namedXmlID[61].strName;
			col6 = namedXmlID[62].strName;
			color2_1 = namedXmlID[63].strName;
			container = namedXmlID[64].strName;
			ctrl_flash = namedXmlID[65].strName;
			ctrl_hk1 = namedXmlID[66].strName;
			ctrl_hk2 = namedXmlID[67].strName;
			edit_drop_bottom = namedXmlID[68].strName;
			edit_drop_top = namedXmlID[69].strName;
			edit_repeat = namedXmlID[70].strName;
			edit_rotate = namedXmlID[71].strName;
			edit_scale = namedXmlID[72].strName;
			edit_skew = namedXmlID[73].strName;
			edit_spin = namedXmlID[74].strName;
			edit_translate = namedXmlID[75].strName;
			edit_url = namedXmlID[76].strName;
			edit_xml = namedXmlID[77].strName;
			flag_win = namedXmlID[78].strName;
			fmw_test = namedXmlID[79].strName;
			game_canvas = namedXmlID[80].strName;
			game_toolbar = namedXmlID[81].strName;
			game_wnd = namedXmlID[82].strName;
			gif_test = namedXmlID[83].strName;
			giftest = namedXmlID[84].strName;
			gl_catalog = namedXmlID[85].strName;
			group1 = namedXmlID[86].strName;
			group2 = namedXmlID[87].strName;
			group_months = namedXmlID[88].strName;
			group_years = namedXmlID[89].strName;
			img_file_icon = namedXmlID[90].strName;
			img_girl = namedXmlID[91].strName;
			img_icon = namedXmlID[92].strName;
			img_indicator = namedXmlID[93].strName;
			img_round = namedXmlID[94].strName;
			img_skin_0 = namedXmlID[95].strName;
			img_skin_1 = namedXmlID[96].strName;
			img_skin_10 = namedXmlID[97].strName;
			img_skin_11 = namedXmlID[98].strName;
			img_skin_12 = namedXmlID[99].strName;
			img_skin_13 = namedXmlID[100].strName;
			img_skin_14 = namedXmlID[101].strName;
			img_skin_15 = namedXmlID[102].strName;
			img_skin_16 = namedXmlID[103].strName;
			img_skin_17 = namedXmlID[104].strName;
			img_skin_18 = namedXmlID[105].strName;
			img_skin_2 = namedXmlID[106].strName;
			img_skin_4 = namedXmlID[107].strName;
			img_skin_5 = namedXmlID[108].strName;
			img_skin_6 = namedXmlID[109].strName;
			img_skin_7 = namedXmlID[110].strName;
			img_skin_8 = namedXmlID[111].strName;
			img_skin_9 = namedXmlID[112].strName;
			img_soui = namedXmlID[113].strName;
			ip_test = namedXmlID[114].strName;
			lasttime = namedXmlID[115].strName;
			lb_test = namedXmlID[116].strName;
			lc_test = namedXmlID[117].strName;
			lv_test_fix = namedXmlID[118].strName;
			lv_test_fix_horz = namedXmlID[119].strName;
			lv_test_flex = namedXmlID[120].strName;
			lv_test_tile = namedXmlID[121].strName;
			matrix_test = namedXmlID[122].strName;
			mclv_test = namedXmlID[123].strName;
			mclv_test_header = namedXmlID[124].strName;
			menu_btn_cir = namedXmlID[125].strName;
			menu_btn_ilike = namedXmlID[126].strName;
			menu_btn_next = namedXmlID[127].strName;
			menu_btn_play = namedXmlID[128].strName;
			menu_btn_pre = namedXmlID[129].strName;
			menu_btn_vol = namedXmlID[130].strName;
			menu_slider_vol = namedXmlID[131].strName;
			mp_test = namedXmlID[132].strName;
			musiclist = namedXmlID[133].strName;
			mytree = namedXmlID[134].strName;
			option2_1 = namedXmlID[135].strName;
			page_button = namedXmlID[136].strName;
			page_calendar = namedXmlID[137].strName;
			page_edit = namedXmlID[138].strName;
			page_fix_height_listview = namedXmlID[139].strName;
			page_flex_height_listview = namedXmlID[140].strName;
			page_hotkey = namedXmlID[141].strName;
			page_ipctrl = namedXmlID[142].strName;
			page_listbox = namedXmlID[143].strName;
			page_listctrl = namedXmlID[144].strName;
			page_mclistview = namedXmlID[145].strName;
			page_mclistview_ex = namedXmlID[146].strName;
			page_progress = namedXmlID[147].strName;
			page_property = namedXmlID[148].strName;
			page_radio_button = namedXmlID[149].strName;
			page_richedit = namedXmlID[150].strName;
			page_splitwnd = namedXmlID[151].strName;
			page_tileview = namedXmlID[152].strName;
			page_treectrl = namedXmlID[153].strName;
			page_treeview = namedXmlID[154].strName;
			pane_left = namedXmlID[155].strName;
			panel_calendar = namedXmlID[156].strName;
			panel_month_picker = namedXmlID[157].strName;
			playbtn = namedXmlID[158].strName;
			player_1 = namedXmlID[159].strName;
			player_2 = namedXmlID[160].strName;
			player_3 = namedXmlID[161].strName;
			player_4 = namedXmlID[162].strName;
			prog_ring = namedXmlID[163].strName;
			prog_test = namedXmlID[164].strName;
			prog_test2 = namedXmlID[165].strName;
			prop_prop = namedXmlID[166].strName;
			prop_target = namedXmlID[167].strName;
			prop_test = namedXmlID[168].strName;
			prop_value = namedXmlID[169].strName;
			pv_test = namedXmlID[170].strName;
			radio3_1 = namedXmlID[171].strName;
			radio3_2 = namedXmlID[172].strName;
			radio3_3 = namedXmlID[173].strName;
			radio3_4 = namedXmlID[174].strName;
			radio3_5 = namedXmlID[175].strName;
			radio3_6 = namedXmlID[176].strName;
			radio_1 = namedXmlID[177].strName;
			radio_2 = namedXmlID[178].strName;
			radio_3 = namedXmlID[179].strName;
			radio_4 = namedXmlID[180].strName;
			rating_score = namedXmlID[181].strName;
			re_gifhost = namedXmlID[182].strName;
			re_notifycenter = namedXmlID[183].strName;
			re_temp_input = namedXmlID[184].strName;
			re_xmlinput = namedXmlID[185].strName;
			rotate_x = namedXmlID[186].strName;
			rotate_y = namedXmlID[187].strName;
			rotate_z = namedXmlID[188].strName;
			sb_test1 = namedXmlID[189].strName;
			sb_test2 = namedXmlID[190].strName;
			size2_1 = namedXmlID[191].strName;
			slider_test = namedXmlID[192].strName;
			slider_test2 = namedXmlID[193].strName;
			songname = namedXmlID[194].strName;
			split_col = namedXmlID[195].strName;
			split_row = namedXmlID[196].strName;
			tab_ctrls = namedXmlID[197].strName;
			tab_main = namedXmlID[198].strName;
			tab_radio2 = namedXmlID[199].strName;
			text1_1 = namedXmlID[200].strName;
			text1_1_1 = namedXmlID[201].strName;
			text1_1_2 = namedXmlID[202].strName;
			text1_1_3 = namedXmlID[203].strName;
			text1_2 = namedXmlID[204].strName;
			text2_1 = namedXmlID[205].strName;
			text2_2 = namedXmlID[206].strName;
			text2_3 = namedXmlID[207].strName;
			text2_4 = namedXmlID[208].strName;
			text2_5 = namedXmlID[209].strName;
			text2_6 = namedXmlID[210].strName;
			text2_7 = namedXmlID[211].strName;
			text2_8 = namedXmlID[212].strName;
			tgl_left = namedXmlID[213].strName;
			tgl_switch = namedXmlID[214].strName;
			timepicker = namedXmlID[215].strName;
			title = namedXmlID[216].strName;
			tree_test = namedXmlID[217].strName;
			tree_view_00 = namedXmlID[218].strName;
			txt_coins = namedXmlID[219].strName;
			txt_desc = namedXmlID[220].strName;
			txt_index = namedXmlID[221].strName;
			txt_installtime = namedXmlID[222].strName;
			txt_label = namedXmlID[223].strName;
			txt_month = namedXmlID[224].strName;
			txt_name = namedXmlID[225].strName;
			txt_path_length = namedXmlID[226].strName;
			txt_rate = namedXmlID[227].strName;
			txt_red = namedXmlID[228].strName;
			txt_score = namedXmlID[229].strName;
			txt_size = namedXmlID[230].strName;
			txt_tip = namedXmlID[231].strName;
			txt_title = namedXmlID[232].strName;
			txt_usetime = namedXmlID[233].strName;
			view_interpolator = namedXmlID[234].strName;
			webkit_toolbar = namedXmlID[235].strName;
			wke_test = namedXmlID[236].strName;
			wnd_ani_host = namedXmlID[237].strName;
			wnd_calendar = namedXmlID[238].strName;
			wnd_container = namedXmlID[239].strName;
			wnd_rgn = namedXmlID[240].strName;
			wnd_temp_host = namedXmlID[241].strName;
		}
		 const wchar_t * name_3d_test;
		 const wchar_t * _name_start;
		 const wchar_t * album;
		 const wchar_t * ani_test;
		 const wchar_t * artist;
		 const wchar_t * btn4_1;
		 const wchar_t * btn4_2;
		 const wchar_t * btn4_3;
		 const wchar_t * btn4_4;
		 const wchar_t * btn4_5;
		 const wchar_t * btn4_6;
		 const wchar_t * btnSelectGif;
		 const wchar_t * btn_ani_hostwnd;
		 const wchar_t * btn_animator;
		 const wchar_t * btn_append_msg;
		 const wchar_t * btn_builtinskin;
		 const wchar_t * btn_close;
		 const wchar_t * btn_create_by_temp;
		 const wchar_t * btn_createchildren;
		 const wchar_t * btn_display;
		 const wchar_t * btn_filewnd;
		 const wchar_t * btn_hidetst;
		 const wchar_t * btn_icon;
		 const wchar_t * btn_init_listbox;
		 const wchar_t * btn_insert_gif;
		 const wchar_t * btn_lrc;
		 const wchar_t * btn_menu;
		 const wchar_t * btn_msgbox;
		 const wchar_t * btn_next_month;
		 const wchar_t * btn_open_wrap_content;
		 const wchar_t * btn_pick_month_cancel;
		 const wchar_t * btn_pick_month_finish;
		 const wchar_t * btn_prev_month;
		 const wchar_t * btn_richedit_open;
		 const wchar_t * btn_richedit_save;
		 const wchar_t * btn_run;
		 const wchar_t * btn_set_prop_value;
		 const wchar_t * btn_skin;
		 const wchar_t * btn_start_notify_thread;
		 const wchar_t * btn_stop_notify_thread;
		 const wchar_t * btn_test;
		 const wchar_t * btn_text;
		 const wchar_t * btn_tip;
		 const wchar_t * btn_today;
		 const wchar_t * btn_uninstall;
		 const wchar_t * btn_webkit_back;
		 const wchar_t * btn_webkit_fore;
		 const wchar_t * btn_webkit_go;
		 const wchar_t * btn_webkit_refresh;
		 const wchar_t * btn_year_next;
		 const wchar_t * btn_year_prev;
		 const wchar_t * cbx_in_lv;
		 const wchar_t * cbx_interpolator;
		 const wchar_t * cbx_test;
		 const wchar_t * chk_mclv_sel;
		 const wchar_t * chromeTab;
		 const wchar_t * clock_main;
		 const wchar_t * col1;
		 const wchar_t * col2;
		 const wchar_t * col3;
		 const wchar_t * col4;
		 const wchar_t * col5;
		 const wchar_t * col6;
		 const wchar_t * color2_1;
		 const wchar_t * container;
		 const wchar_t * ctrl_flash;
		 const wchar_t * ctrl_hk1;
		 const wchar_t * ctrl_hk2;
		 const wchar_t * edit_drop_bottom;
		 const wchar_t * edit_drop_top;
		 const wchar_t * edit_repeat;
		 const wchar_t * edit_rotate;
		 const wchar_t * edit_scale;
		 const wchar_t * edit_skew;
		 const wchar_t * edit_spin;
		 const wchar_t * edit_translate;
		 const wchar_t * edit_url;
		 const wchar_t * edit_xml;
		 const wchar_t * flag_win;
		 const wchar_t * fmw_test;
		 const wchar_t * game_canvas;
		 const wchar_t * game_toolbar;
		 const wchar_t * game_wnd;
		 const wchar_t * gif_test;
		 const wchar_t * giftest;
		 const wchar_t * gl_catalog;
		 const wchar_t * group1;
		 const wchar_t * group2;
		 const wchar_t * group_months;
		 const wchar_t * group_years;
		 const wchar_t * img_file_icon;
		 const wchar_t * img_girl;
		 const wchar_t * img_icon;
		 const wchar_t * img_indicator;
		 const wchar_t * img_round;
		 const wchar_t * img_skin_0;
		 const wchar_t * img_skin_1;
		 const wchar_t * img_skin_10;
		 const wchar_t * img_skin_11;
		 const wchar_t * img_skin_12;
		 const wchar_t * img_skin_13;
		 const wchar_t * img_skin_14;
		 const wchar_t * img_skin_15;
		 const wchar_t * img_skin_16;
		 const wchar_t * img_skin_17;
		 const wchar_t * img_skin_18;
		 const wchar_t * img_skin_2;
		 const wchar_t * img_skin_4;
		 const wchar_t * img_skin_5;
		 const wchar_t * img_skin_6;
		 const wchar_t * img_skin_7;
		 const wchar_t * img_skin_8;
		 const wchar_t * img_skin_9;
		 const wchar_t * img_soui;
		 const wchar_t * ip_test;
		 const wchar_t * lasttime;
		 const wchar_t * lb_test;
		 const wchar_t * lc_test;
		 const wchar_t * lv_test_fix;
		 const wchar_t * lv_test_fix_horz;
		 const wchar_t * lv_test_flex;
		 const wchar_t * lv_test_tile;
		 const wchar_t * matrix_test;
		 const wchar_t * mclv_test;
		 const wchar_t * mclv_test_header;
		 const wchar_t * menu_btn_cir;
		 const wchar_t * menu_btn_ilike;
		 const wchar_t * menu_btn_next;
		 const wchar_t * menu_btn_play;
		 const wchar_t * menu_btn_pre;
		 const wchar_t * menu_btn_vol;
		 const wchar_t * menu_slider_vol;
		 const wchar_t * mp_test;
		 const wchar_t * musiclist;
		 const wchar_t * mytree;
		 const wchar_t * option2_1;
		 const wchar_t * page_button;
		 const wchar_t * page_calendar;
		 const wchar_t * page_edit;
		 const wchar_t * page_fix_height_listview;
		 const wchar_t * page_flex_height_listview;
		 const wchar_t * page_hotkey;
		 const wchar_t * page_ipctrl;
		 const wchar_t * page_listbox;
		 const wchar_t * page_listctrl;
		 const wchar_t * page_mclistview;
		 const wchar_t * page_mclistview_ex;
		 const wchar_t * page_progress;
		 const wchar_t * page_property;
		 const wchar_t * page_radio_button;
		 const wchar_t * page_richedit;
		 const wchar_t * page_splitwnd;
		 const wchar_t * page_tileview;
		 const wchar_t * page_treectrl;
		 const wchar_t * page_treeview;
		 const wchar_t * pane_left;
		 const wchar_t * panel_calendar;
		 const wchar_t * panel_month_picker;
		 const wchar_t * playbtn;
		 const wchar_t * player_1;
		 const wchar_t * player_2;
		 const wchar_t * player_3;
		 const wchar_t * player_4;
		 const wchar_t * prog_ring;
		 const wchar_t * prog_test;
		 const wchar_t * prog_test2;
		 const wchar_t * prop_prop;
		 const wchar_t * prop_target;
		 const wchar_t * prop_test;
		 const wchar_t * prop_value;
		 const wchar_t * pv_test;
		 const wchar_t * radio3_1;
		 const wchar_t * radio3_2;
		 const wchar_t * radio3_3;
		 const wchar_t * radio3_4;
		 const wchar_t * radio3_5;
		 const wchar_t * radio3_6;
		 const wchar_t * radio_1;
		 const wchar_t * radio_2;
		 const wchar_t * radio_3;
		 const wchar_t * radio_4;
		 const wchar_t * rating_score;
		 const wchar_t * re_gifhost;
		 const wchar_t * re_notifycenter;
		 const wchar_t * re_temp_input;
		 const wchar_t * re_xmlinput;
		 const wchar_t * rotate_x;
		 const wchar_t * rotate_y;
		 const wchar_t * rotate_z;
		 const wchar_t * sb_test1;
		 const wchar_t * sb_test2;
		 const wchar_t * size2_1;
		 const wchar_t * slider_test;
		 const wchar_t * slider_test2;
		 const wchar_t * songname;
		 const wchar_t * split_col;
		 const wchar_t * split_row;
		 const wchar_t * tab_ctrls;
		 const wchar_t * tab_main;
		 const wchar_t * tab_radio2;
		 const wchar_t * text1_1;
		 const wchar_t * text1_1_1;
		 const wchar_t * text1_1_2;
		 const wchar_t * text1_1_3;
		 const wchar_t * text1_2;
		 const wchar_t * text2_1;
		 const wchar_t * text2_2;
		 const wchar_t * text2_3;
		 const wchar_t * text2_4;
		 const wchar_t * text2_5;
		 const wchar_t * text2_6;
		 const wchar_t * text2_7;
		 const wchar_t * text2_8;
		 const wchar_t * tgl_left;
		 const wchar_t * tgl_switch;
		 const wchar_t * timepicker;
		 const wchar_t * title;
		 const wchar_t * tree_test;
		 const wchar_t * tree_view_00;
		 const wchar_t * txt_coins;
		 const wchar_t * txt_desc;
		 const wchar_t * txt_index;
		 const wchar_t * txt_installtime;
		 const wchar_t * txt_label;
		 const wchar_t * txt_month;
		 const wchar_t * txt_name;
		 const wchar_t * txt_path_length;
		 const wchar_t * txt_rate;
		 const wchar_t * txt_red;
		 const wchar_t * txt_score;
		 const wchar_t * txt_size;
		 const wchar_t * txt_tip;
		 const wchar_t * txt_title;
		 const wchar_t * txt_usetime;
		 const wchar_t * view_interpolator;
		 const wchar_t * webkit_toolbar;
		 const wchar_t * wke_test;
		 const wchar_t * wnd_ani_host;
		 const wchar_t * wnd_calendar;
		 const wchar_t * wnd_container;
		 const wchar_t * wnd_rgn;
		 const wchar_t * wnd_temp_host;
		}name;

		class _id{
		public:
		const static int name_3d_test	=	65680;
		const static int _name_start	=	65535;
		const static int album	=	65584;
		const static int ani_test	=	65567;
		const static int artist	=	65583;
		const static int btn4_1	=	65608;
		const static int btn4_2	=	65609;
		const static int btn4_3	=	65610;
		const static int btn4_4	=	65611;
		const static int btn4_5	=	65612;
		const static int btn4_6	=	65613;
		const static int btnSelectGif	=	65695;
		const static int btn_ani_hostwnd	=	65734;
		const static int btn_animator	=	65729;
		const static int btn_append_msg	=	65589;
		const static int btn_builtinskin	=	51;
		const static int btn_close	=	65725;
		const static int btn_create_by_temp	=	65660;
		const static int btn_createchildren	=	65668;
		const static int btn_display	=	65657;
		const static int btn_filewnd	=	65667;
		const static int btn_hidetst	=	65658;
		const static int btn_icon	=	65572;
		const static int btn_init_listbox	=	65628;
		const static int btn_insert_gif	=	0;
		const static int btn_lrc	=	65595;
		const static int btn_menu	=	65654;
		const static int btn_msgbox	=	65593;
		const static int btn_next_month	=	65713;
		const static int btn_open_wrap_content	=	65659;
		const static int btn_pick_month_cancel	=	65721;
		const static int btn_pick_month_finish	=	65722;
		const static int btn_prev_month	=	65711;
		const static int btn_richedit_open	=	65590;
		const static int btn_richedit_save	=	65591;
		const static int btn_run	=	65706;
		const static int btn_set_prop_value	=	65632;
		const static int btn_skin	=	65653;
		const static int btn_start_notify_thread	=	65683;
		const static int btn_stop_notify_thread	=	65684;
		const static int btn_test	=	65575;
		const static int btn_text	=	65573;
		const static int btn_tip	=	65597;
		const static int btn_today	=	65715;
		const static int btn_uninstall	=	65569;
		const static int btn_webkit_back	=	65689;
		const static int btn_webkit_fore	=	65690;
		const static int btn_webkit_go	=	65693;
		const static int btn_webkit_refresh	=	65691;
		const static int btn_year_next	=	65720;
		const static int btn_year_prev	=	65719;
		const static int cbx_in_lv	=	65576;
		const static int cbx_interpolator	=	65696;
		const static int cbx_test	=	65626;
		const static int chk_mclv_sel	=	65552;
		const static int chromeTab	=	65686;
		const static int clock_main	=	65681;
		const static int col1	=	65553;
		const static int col2	=	65558;
		const static int col3	=	65561;
		const static int col4	=	65563;
		const static int col5	=	65565;
		const static int col6	=	65568;
		const static int color2_1	=	65644;
		const static int container	=	65547;
		const static int ctrl_flash	=	65656;
		const static int ctrl_hk1	=	65586;
		const static int ctrl_hk2	=	65587;
		const static int edit_drop_bottom	=	65666;
		const static int edit_drop_top	=	65665;
		const static int edit_repeat	=	65709;
		const static int edit_rotate	=	65673;
		const static int edit_scale	=	65674;
		const static int edit_skew	=	65675;
		const static int edit_spin	=	65594;
		const static int edit_translate	=	65676;
		const static int edit_url	=	65692;
		const static int edit_xml	=	65669;
		const static int flag_win	=	400;
		const static int fmw_test	=	65682;
		const static int game_canvas	=	65699;
		const static int game_toolbar	=	65705;
		const static int game_wnd	=	300;
		const static int gif_test	=	1000;
		const static int giftest	=	65694;
		const static int gl_catalog	=	65543;
		const static int group1	=	65634;
		const static int group2	=	65640;
		const static int group_months	=	65717;
		const static int group_years	=	65718;
		const static int img_file_icon	=	65579;
		const static int img_girl	=	65731;
		const static int img_icon	=	65554;
		const static int img_indicator	=	65548;
		const static int img_round	=	65596;
		const static int img_skin_0	=	10;
		const static int img_skin_1	=	11;
		const static int img_skin_10	=	19;
		const static int img_skin_11	=	20;
		const static int img_skin_12	=	21;
		const static int img_skin_13	=	22;
		const static int img_skin_14	=	23;
		const static int img_skin_15	=	24;
		const static int img_skin_16	=	25;
		const static int img_skin_17	=	26;
		const static int img_skin_18	=	27;
		const static int img_skin_2	=	12;
		const static int img_skin_4	=	13;
		const static int img_skin_5	=	14;
		const static int img_skin_6	=	15;
		const static int img_skin_7	=	16;
		const static int img_skin_8	=	17;
		const static int img_skin_9	=	18;
		const static int img_soui	=	65728;
		const static int ip_test	=	65588;
		const static int lasttime	=	65585;
		const static int lb_test	=	65627;
		const static int lc_test	=	65570;
		const static int lv_test_fix	=	65574;
		const static int lv_test_fix_horz	=	65571;
		const static int lv_test_flex	=	65577;
		const static int lv_test_tile	=	65578;
		const static int matrix_test	=	65672;
		const static int mclv_test	=	65550;
		const static int mclv_test_header	=	65551;
		const static int menu_btn_cir	=	65540;
		const static int menu_btn_ilike	=	65539;
		const static int menu_btn_next	=	65538;
		const static int menu_btn_play	=	65537;
		const static int menu_btn_pre	=	65536;
		const static int menu_btn_vol	=	65541;
		const static int menu_slider_vol	=	65542;
		const static int mp_test	=	65623;
		const static int musiclist	=	65580;
		const static int mytree	=	65698;
		const static int option2_1	=	65641;
		const static int page_button	=	112;
		const static int page_calendar	=	115;
		const static int page_edit	=	108;
		const static int page_fix_height_listview	=	102;
		const static int page_flex_height_listview	=	103;
		const static int page_hotkey	=	109;
		const static int page_ipctrl	=	110;
		const static int page_listbox	=	117;
		const static int page_listctrl	=	101;
		const static int page_mclistview	=	100;
		const static int page_mclistview_ex	=	105;
		const static int page_progress	=	114;
		const static int page_property	=	118;
		const static int page_radio_button	=	113;
		const static int page_richedit	=	111;
		const static int page_splitwnd	=	116;
		const static int page_tileview	=	104;
		const static int page_treectrl	=	106;
		const static int page_treeview	=	107;
		const static int pane_left	=	65730;
		const static int panel_calendar	=	65710;
		const static int panel_month_picker	=	65716;
		const static int playbtn	=	65582;
		const static int player_1	=	65700;
		const static int player_2	=	65701;
		const static int player_3	=	65702;
		const static int player_4	=	65703;
		const static int prog_ring	=	65621;
		const static int prog_test	=	65615;
		const static int prog_test2	=	65618;
		const static int prop_prop	=	65630;
		const static int prop_target	=	65629;
		const static int prop_test	=	65633;
		const static int prop_value	=	65631;
		const static int pv_test	=	65664;
		const static int radio3_1	=	65602;
		const static int radio3_2	=	65603;
		const static int radio3_3	=	65604;
		const static int radio3_4	=	65605;
		const static int radio3_5	=	65606;
		const static int radio3_6	=	65607;
		const static int radio_1	=	65598;
		const static int radio_2	=	65599;
		const static int radio_3	=	65600;
		const static int radio_4	=	65601;
		const static int rating_score	=	65559;
		const static int re_gifhost	=	65592;
		const static int re_notifycenter	=	65685;
		const static int re_temp_input	=	65661;
		const static int re_xmlinput	=	65708;
		const static int rotate_x	=	65677;
		const static int rotate_y	=	65678;
		const static int rotate_z	=	65679;
		const static int sb_test1	=	65617;
		const static int sb_test2	=	65620;
		const static int size2_1	=	65642;
		const static int slider_test	=	65616;
		const static int slider_test2	=	65619;
		const static int songname	=	65581;
		const static int split_col	=	65625;
		const static int split_row	=	65624;
		const static int tab_ctrls	=	65549;
		const static int tab_main	=	65655;
		const static int tab_radio2	=	65614;
		const static int text1_1	=	65635;
		const static int text1_1_1	=	65637;
		const static int text1_1_2	=	65638;
		const static int text1_1_3	=	65636;
		const static int text1_2	=	65639;
		const static int text2_1	=	65645;
		const static int text2_2	=	65643;
		const static int text2_3	=	65646;
		const static int text2_4	=	65647;
		const static int text2_5	=	65648;
		const static int text2_6	=	65649;
		const static int text2_7	=	65650;
		const static int text2_8	=	65651;
		const static int tgl_left	=	65733;
		const static int tgl_switch	=	65546;
		const static int timepicker	=	65622;
		const static int title	=	65544;
		const static int tree_test	=	65732;
		const static int tree_view_00	=	65723;
		const static int txt_coins	=	65707;
		const static int txt_desc	=	65556;
		const static int txt_index	=	65557;
		const static int txt_installtime	=	65564;
		const static int txt_label	=	65545;
		const static int txt_month	=	65712;
		const static int txt_name	=	65555;
		const static int txt_path_length	=	65663;
		const static int txt_rate	=	65704;
		const static int txt_red	=	65724;
		const static int txt_score	=	65560;
		const static int txt_size	=	65562;
		const static int txt_tip	=	65726;
		const static int txt_title	=	65652;
		const static int txt_usetime	=	65566;
		const static int view_interpolator	=	65697;
		const static int webkit_toolbar	=	65688;
		const static int wke_test	=	65687;
		const static int wnd_ani_host	=	65727;
		const static int wnd_calendar	=	65714;
		const static int wnd_container	=	65670;
		const static int wnd_rgn	=	65671;
		const static int wnd_temp_host	=	65662;
		}id;

		class _string{
		public:
		const static int mccol_1	=	0;
		const static int mccol_2	=	1;
		const static int mccol_3	=	2;
		const static int mccol_4	=	3;
		const static int mccol_5	=	4;
		const static int mccol_6	=	5;
		const static int setskintitle	=	6;
		const static int title	=	7;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		const static int white_30	=	5;
		const static int white_50	=	6;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
