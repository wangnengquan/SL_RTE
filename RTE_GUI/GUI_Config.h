#ifndef __LV_CONFIG_H
#define __LV_CONFIG_H
//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------
//<s>  GUI Version
//<i> LITTLEV GUI ԭʼ�ļ��汾��
#define LV_VERSION                 "5.3.0"
// <h> Resolution settings
 //<i> GUI�ֱ�������
	 //<o> LV_HOR_RES
	 //<i> GUIˮƽ���ش�С
	#define LV_HOR_RES          (320)
	 //<o> LV_VER_RES
	 //<i> GUI��ֱ���ش�С
	#define LV_VER_RES          (240)
	 //<o> LV_DPI
	 //<i> GUIDPI��С
	#define LV_DPI              100
// </h>

// <h> Display settings
// <i> GUI��ʾ����
	// <o> LV_VDB_SIZE
	// <i> Ĭ�ϴ�СΪ ~1/10 screen�����ڻ����ͼ��������Լ���͸����
	#define LV_VDB_SIZE         (LV_VER_RES  * LV_HOR_RES)/10
	// <q> LV_VDB_DOUBLE
	// <i> GUI ˫�����ͼ����ҪDMA���
	#define LV_VDB_DOUBLE       0       /*1: Enable the use of 2 VDBs*/
	// GUI ÿ���ص�ɫ�����
	#define LV_VDB_PX_BPP       LV_COLOR_SIZE
	// <q> LV_VDB_TRUE_DOUBLE_BUFFERED
	// <i> GUI ˫�����ͼ ʹ��������Ļ ���LTDCʹ��
    // * Requires:
    // * - LV_VDB_SIZE = LV_HOR_RES * LV_VER_RES
    // * - LV_VDB_DOUBLE = 1
	#define LV_VDB_TRUE_DOUBLE_BUFFERED 0
	// <q> LV_ANTIALIAS
	// <i> GUI �����ʹ��
	#define LV_ANTIALIAS        1       /*1: Enable anti-aliasing*/
	// <o> LV_INV_FIFO_SIZE
	// <i> GUI ��ĻĬ�����object��Ŀ
	#define LV_INV_FIFO_SIZE          32        /*The average count of objects on a screen */
// </h>

// <h> Input device settings
// <i> GUI�����豸����
	// <o> LV_INDEV_READ_PERIOD
	// <i> GUI �����豸��ȡ���ʱ�䣨��λ��ms��
	#define LV_INDEV_READ_PERIOD            10    	/*Input device read period in milliseconds*/
    #define LV_INDEV_POINT_MARKER           0                      /*Mark the pressed points  (required: USE_LV_REAL_DRAW = 1)*/
	// <o> LV_INDEV_DRAG_LIMIT
	// <i> GUI �϶���ֵ
	#define LV_INDEV_DRAG_LIMIT             10                     /*Drag threshold in pixels */
	#define LV_INDEV_DRAG_THROW             20                     /*Drag throw slow-down in [%]. Greater value means faster slow-down */
	// <o> LV_INDEV_LONG_PRESS_TIME
	// <i> GUI �����豸����ʱ�䣨��λ��ms��
	#define LV_INDEV_LONG_PRESS_TIME        400                    /*Long press time in milliseconds*/
	// <o> LV_INDEV_LONG_PRESS_REP_TIME
	// <i> GUI �����豸�����ط�ʱ�䣨��λ��ms��
	#define LV_INDEV_LONG_PRESS_REP_TIME    100                    /*Repeated trigger period in long press [ms] */
// </h>

// <h> Color settings
// <i> GUIɫ������
	// <o> LV_COLOR_DEPTH
	// <i> GUIʹ�õ�ɫ��λ����С
	// <i> Ĭ�ϴ�С: 16����λ��bit��
	#define LV_COLOR_DEPTH     16                    /*Color depth: 1/8/16/32*/
	// <q> LV_COLOR_16_SWAP
	// <i> �Ƿ񽻻�RGB565�������ߵ�λ ��λ�ӿ�LCDʱ��Ҫע������
	#define LV_COLOR_16_SWAP   0
	// <q> LV_COLOR_SCREEN_TRANSP
	// <i> �Ƿ�ʹ����Ļ͸��Ч�� ��Ҫ32λɫ��֧��
	#define LV_COLOR_SCREEN_TRANSP        0           /*1: Enable screen transparency. Useful for OSD or other overlapping GUIs. Requires ARGB8888 colors*/
	#define LV_COLOR_TRANSP    LV_COLOR_LIME          /*Images pixels with this color will not be drawn (with chroma keying)*/
// </h>

// <h> Text settings
// <i> GUI �ı�����
	// <q> LV_TXT_UTF8
	// <i> GUI ʹ��UTF8����
	#define LV_TXT_UTF8             1                /*Enable UTF-8 coded Unicode character usage */
	//<s>  LV_TXT_BREAK_CHARS
	//<i> GUI TXTʹ���ض��ַ���
	#define LV_TXT_BREAK_CHARS     " ,.;:-_"         /*Can break texts on these chars*/
	#define LV_TXT_LINE_BREAK_LONG_LEN 12 /* If a character is at least this long, will break wherever "prettiest" */
	#define LV_TXT_LINE_BREAK_LONG_PRE_MIN_LEN 3 /* Minimum number of characters of a word to put on a line before a break */
	#define LV_TXT_LINE_BREAK_LONG_POST_MIN_LEN 1 /* Minimum number of characters of a word to put on a line after a break */
// </h>

// <h> GUI feature usage
// <i> GUI ��������
// <q> USE_LV_SHADOW
	// <i> GUI ��Ӱģ��
	#define USE_LV_SHADOW           1               /*1: Enable shadows*/
	// <e> USE_LV_ANIMATION
	// <i> GUI ����ģ��
	#define USE_LV_ANIMATION        1            /*1: Enable all animations*/
		// <o> LV_AINIM_TIME_PERIOD
		// <i> GUI ����ʱ�ӻ�׼
		// <i> Ĭ�ϴ�С: 10����λ��MS��
		#define LV_AINIM_TIME_PERIOD          10
	// </e>
	// <q> USE_LV_GROUP
	// <i> GUI Groupģ��
	#define USE_LV_GROUP            1               /*1: Enable object groups (for keyboards)*/
	// <q> USE_LV_GPU
	// <i> GUI ʹ��ͼ�μ���Ӳ��
	#define USE_LV_GPU              0              /*1: Enable GPU interface*/
	// <q> USE_LV_REAL_DRAW
	// <i> GUI ֱ�ӻ���
	#define USE_LV_REAL_DRAW        1               /*1: Enable function which draw directly to the frame buffer instead of VDB (required if LV_VDB_SIZE = 0)*/
    #define USE_LV_MULTI_LANG       0               /* Number of languages for labels to store (0: to disable this feature)*/
// </h>

// <h> Compiler settings
// <i> ����������
	// <q> LV_COMPILER_VLA_SUPPORTED
	// <i> ������֧�ֱ䳤����
	#define LV_COMPILER_VLA_SUPPORTED            1  /* 1: Variable length array is supported*/
	// <q> LV_COMPILER_NON_CONST_INIT_SUPPORTED
	// <i> ������֧��const����ʼ��
	#define LV_COMPILER_NON_CONST_INIT_SUPPORTED 1  /* 1: Initialization with non constant values are supported */
// </h>

/*Log settings*/
#define USE_LV_LOG      0   /*Enable/disable the log module*/
#if USE_LV_LOG
/* How important log should be added:
 * LV_LOG_LEVEL_TRACE       A lot of logs to give detailed information
 * LV_LOG_LEVEL_INFO        Log important events
 * LV_LOG_LEVEL_WARN        Log if something unwanted happened but didn't caused problem
 * LV_LOG_LEVEL_ERROR       Only critical issue, when the system may fail
 */
#define LV_LOG_LEVEL    LV_LOG_LEVEL_INFO
/* 1: Print the log with 'printf'; 0: user need to register a callback*/

#define LV_LOG_PRINTF   0
#endif  /*USE_LV_LOG*/


// <h> Theme settings
// <i> ��������
	// <q> LV_THEME_LIVE_UPDATE
	// <i> ֧�������и������� ��Ҫ�����8-10 kB RAM
	#define LV_THEME_LIVE_UPDATE    1       /*1: Allow theme switching at run time. Uses 8..10 kB of RAM*/
	// <q> USE_LV_THEME_DEFAULT
	#define USE_LV_THEME_DEFAULT    1       /*Built mainly from the built-in styles. Consumes very few RAM*/
	// <q> USE_LV_THEME_ALIEN
	#define USE_LV_THEME_ALIEN      1       /*Dark futuristic theme*/
	// <q> USE_LV_THEME_NIGHT
	#define USE_LV_THEME_NIGHT      1       /*Dark elegant theme*/
	// <q> USE_LV_THEME_MONO
	#define USE_LV_THEME_MONO       1       /*Mono color theme for monochrome displays*/
	// <q> USE_LV_THEME_MATERIAL
	#define USE_LV_THEME_MATERIAL   1       /*Flat theme with bold colors and light shadows*/
	// <q> USE_LV_THEME_ZEN
	#define USE_LV_THEME_ZEN        1       /*Peaceful, mainly light theme */
	// <q> USE_LV_THEME_NEMO
	#define USE_LV_THEME_NEMO       1       /*Water-like theme based on the movie "Finding Nemo"*/
// </h>

// <h> Font Settings
// <i> GUI ��������
#define LV_FONT_USE_FREETYPE        1
#define LV_FONT_DEFAULT        &lv_font_dejavu_20    /*Always set a default font from the built-in fonts*/
/* More info about fonts: https://littlevgl.com/basics#fonts
 * To enable a built-in font use 1,2,4 or 8 values
 * which will determine the bit-per-pixel */
#define USE_LV_FONT_DEJAVU_10              4
#define USE_LV_FONT_DEJAVU_10_LATIN_SUP    0
#define USE_LV_FONT_DEJAVU_10_CYRILLIC     0
#define USE_LV_FONT_SYMBOL_10              4

#define USE_LV_FONT_DEJAVU_20              4
#define USE_LV_FONT_DEJAVU_20_LATIN_SUP    0
#define USE_LV_FONT_DEJAVU_20_CYRILLIC     0
#define USE_LV_FONT_SYMBOL_20              4

#define USE_LV_FONT_DEJAVU_30              4
#define USE_LV_FONT_DEJAVU_30_LATIN_SUP    0
#define USE_LV_FONT_DEJAVU_30_CYRILLIC     0
#define USE_LV_FONT_SYMBOL_30              4

#define USE_LV_FONT_DEJAVU_40              4
#define USE_LV_FONT_DEJAVU_40_LATIN_SUP    0
#define USE_LV_FONT_DEJAVU_40_CYRILLIC     0
#define USE_LV_FONT_SYMBOL_40              4

#define USE_LV_FONT_MONOSPACE_8            1
// </h>


/*===================
 *  LV_OBJ SETTINGS
 *==================*/
#define LV_OBJ_FREE_NUM_TYPE    uint32_t    /*Type of free number attribute (comment out disable free number)*/
#define LV_OBJ_FREE_PTR         1           /*Enable the free pointer attribute*/
#define LV_OBJ_REALIGN          1           /*Enable `lv_obj_realaign()` based on `lv_obj_align()` parameters*/
#endif

// <h> Objectx settings
// <i> GUI �ؼ�����
	// <e> USE_LV_LABEL
	// <i> GUI ��ǩ�ؼ� �����ؼ�����
	#define USE_LV_LABEL    1
	#if USE_LV_LABEL != 0
	// <o> LV_LABEL_SCROLL_SPEED
	// <i> GUI ��ǩ�ؼ�����ʱ�䣨��λ��ms��
	#define LV_LABEL_SCROLL_SPEED       20     /*Hor, or ver. scroll speed [px/sec] in 'LV_LABEL_LONG_SCROLL/ROLL' mode*/
	#endif
	// </e>
	// <e> USE_LV_IMG
	// <i> GUI ͼƬ�ؼ� �����ؼ���label
	#define USE_LV_IMG      1
	// <q> LV_IMG_CF_INDEXED
	#define LV_IMG_CF_INDEXED   1       /*Enable indexed (palette) images*/
	// <q> LV_IMG_CF_ALPHA
	#define LV_IMG_CF_ALPHA     1       /*Enable alpha indexed images*/
	// </e>
	// <e> USE_LV_LINE
	// <i> GUI ֱ�߿ؼ� �����ؼ�����
	#define USE_LV_LINE     1
	// </e>
	// <e> USE_LV_ARC
	// <i> GUI arc�ؼ� �����ؼ�����
	#define USE_LV_ARC     1
	// </e>
	// <e> USE_LV_CONT
	// <i> GUI �����ؼ� �����ؼ�����
	#define USE_LV_CONT     1
	// </e>
	// <e> USE_LV_PAGE
	// <i> GUI ҳ�ؼ� �����ؼ���cont
	#define USE_LV_PAGE     1
	// </e>
	// <e> USE_LV_WIN
	// <i> GUI ���ڿؼ� �����ؼ���cont, btn, label, img, page
	#define USE_LV_WIN      1
	// </e>
	// <e> USE_LV_TABVIEW
	// <i> GUI ��ǩҳ�ؼ� �����ؼ���page, btnm
	#define USE_LV_TABVIEW      1
	#if USE_LV_TABVIEW != 0
	// <o> LV_LABEL_SCROLL_SPEED
	// <i> GUI ��ǩҳ�ؼ��л�ʱ�䣨��λ��ms��
	#define LV_TABVIEW_ANIM_TIME    200     /*Time of slide animation [ms] (0: no animation)*/
	#endif
	// </e>
    /*Tileview (dependencies: lv_page) */
    #define USE_LV_TILEVIEW  1
    #if USE_LV_TILEVIEW != 0
    #define LV_TILEVIEW_ANIM_TIME   300     /*Time of slide animation [ms] (0: no animation)*/
    #endif
	// <e> USE_LV_BAR
	// <i> GUI �������ؼ� �����ؼ�����
	#define USE_LV_BAR      1
	// </e>
	// <e> USE_LV_LMETER
	// <i> GUI ���ȱ�ؼ� �����ؼ�����
	#define USE_LV_LMETER   1
	// </e>
	// <e> USE_LV_GAUGE
	// <i> GUI ���ȱ�ؼ�2 �����ؼ���bar, lmeter
	#define USE_LV_GAUGE    1
	// </e>
	// <e> USE_LV_CHART
	// <i> GUI ��άͼ�ؼ� �����ؼ�����
	#define USE_LV_CHART    1
	// </e>
    /*Table (dependencies: lv_label)*/
    #define USE_LV_TABLE    1
    #if USE_LV_TABLE != 0
    #define LV_TABLE_COL_MAX    12
    #endif
	// <e> USE_LV_LED
	// <i> GUI LED�ؼ� �����ؼ�����
	#define USE_LV_LED      1
	// </e>
	// <e> USE_LV_MBOX
	// <i> GUI ��Ϣ���ڿؼ� �����ؼ���rect, btnm, label
	#define USE_LV_MBOX     1
	// </e>
	// <e> USE_LV_TA
	// <i> GUI �ı���ؼ� �����ؼ���label, page
	#define USE_LV_TA       1
	#if USE_LV_TA != 0
	// <o> LV_TA_CURSOR_BLINK_TIME
	// <i> GUI �ı���ؼ�������˸�������λ��ms��
	#define LV_TA_CURSOR_BLINK_TIME 400     /*ms*/
	// <o> LV_TA_PWD_SHOW_TIME
	// <i> GUI �ı���ؼ�PWD��ʾʱ�䣨��λ��ms��
	#define LV_TA_PWD_SHOW_TIME     1500    /*ms*/
	#endif
	// </e>
    /*Spinbox (dependencies: lv_ta)*/
    #define USE_LV_SPINBOX       1
	// <e> USE_LV_CALENDAR
	// <i> GUI �����ؼ� �����ؼ�����
	#define USE_LV_CALENDAR    1
	// </e>
	// <e> USE_LV_PRELOAD
	// <i> GUI Ԥ���ؿؼ� �����ؼ���arc
	/*Preload (dependencies: arc)*/
	#define USE_LV_PRELOAD      1
	#if USE_LV_PRELOAD != 0
	// <o> LV_PRELOAD_DEF_ARC_LENGTH
	#define LV_PRELOAD_DEF_ARC_LENGTH   60      /*[deg]*/
	// <o> LV_PRELOAD_DEF_SPIN_TIME
	#define LV_PRELOAD_DEF_SPIN_TIME    1000    /*[ms]*/
	#endif
	// </e>
    /*Canvas (dependencies: lv_img)*/
    #define USE_LV_CANVAS       1
	// <e> USE_LV_BTN
	// <i> GUI ��ť�ؼ� �����ؼ���cont
	#define USE_LV_BTN      1
	#if USE_LV_BTN != 0
	// <q> LV_BTN_INK_EFFECT
	// <i> GUI ��ť���¶���
	#define LV_BTN_INK_EFFECT   1       /*Enable button-state animations - draw a circle on click (dependencies: USE_LV_ANIMATION)*/
	// <q> USE_LV_IMGBTN
	// <i> GUI ͼƬ��ť
	#define USE_LV_IMGBTN   1
    #if USE_LV_IMGBTN != 0
    #define LV_IMGBTN_TILED 0           /*1: The imgbtn requires left, mid and right parts and the width can be set freely*/
	#endif
	#endif
	// </e>
	// <e> USE_LV_BTNM
	// <i> GUI ����ť�ؼ� �����ؼ�����
	#define USE_LV_BTNM     1
	// </e>
	// <e> USE_LV_KB
	// <i> GUI ���̿ؼ� �����ؼ���btnm
	#define USE_LV_KB       1
	// </e>
	// <e> USE_LV_CB
	// <i> GUI ��ѡ��ؼ� �����ؼ���btn, label
	#define USE_LV_CB       1
	// </e>
	// <e> USE_LV_LIST
	// <i> GUI �б�ؼ� �����ؼ���page, btn, label, (img optionally for icons )
	#define USE_LV_LIST     1
	#if USE_LV_LIST != 0
	// <o> LV_LIST_FOCUS_TIME
	// <i> GUI �б�ؼ����㶯��ʱ�䣨��λ��ms��
	#define LV_LIST_FOCUS_TIME  100 /*Default animation time of focusing to a list element [ms] (0: no animation)  */
	#endif
	// </e>
	// <e> USE_LV_DDLIST
	// <i> GUI �����б�ؼ� �����ؼ���page, label
	#define USE_LV_DDLIST    1
	#if USE_LV_DDLIST != 0
	// <o> LV_DDLIST_ANIM_TIME
	// <i> GUI �����б�ؼ�����ʱ�䣨��λ��ms��
	#define LV_DDLIST_ANIM_TIME     200     /*Open and close default animation time [ms] (0: no animation)*/
	#endif
	// </e>
	// <e> USE_LV_ROLLER
	// <i> GUI �����б�ؼ� �����ؼ���ddlist
	#define USE_LV_ROLLER    1
	#if USE_LV_ROLLER != 0
	// <o> LV_ROLLER_ANIM_TIME
	// <i> GUI �����б�ؼ�����ʱ�䣨��λ��ms��
	#define LV_ROLLER_ANIM_TIME     200     /*Focus animation time [ms] (0: no animation)*/
	#endif
	// </e>
	// <e> USE_LV_SLIDER
	// <i> GUI �϶��������ؼ� �����ؼ���bar
	#define USE_LV_SLIDER    1
	// </e>
	// <e> USE_LV_SW
	// <i> GUI ���ؿؼ� �����ؼ���slider
	#define USE_LV_SW       1
	// </e>
// </h>
/****************** (C) COPYRIGHT SuChow University Shannon********************/
