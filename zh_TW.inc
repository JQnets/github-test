<?php
    /**
     * ----------------
     *   提醒! 請注意!
     * ----------------
     * 1. 確認用途
     *     若不確定已存在的語系變數用途是一樣的，
     *     則自行命名一組語系變數，
     *     以免後續變更造成不一致。
     *
     * 2. 確認變數不重覆
     * ----------------
     */

    // 主版面
    $LANG_PAGE_META                    = "999康養財富計劃";
    $LANG_PAGE_COPYRIGHT               = "2017 aleen39.tw 版權所有."; // "2017 aleen39.tw All rights reserved.";
    $LANG_PAGE_VERSION                 = "1.2 國際版";

    // Session(COOKIE) & Login
    $LANG_SESSION_ACTIVE               = "<p>目前你的瀏覽器未開啟COOKIE，無法進入。</p> <br / > 請開啟COOKIE後在登入。</p>";
    $LANG_SESSION_AUTH_SUCCESS         = "登入成功！";
    $LANG_SESSION_AUTH_FAILURE         = "帳號或密碼輸入錯誤，請重新登入！";
    $LANG_SESSION_AUTH_LOCK            = "您的帳號已被鎖定，請於30分鐘後在重新登入！";
    $LANG_SESSION_AUTH_RETRY           = "帳號或密碼輸入錯誤，請重新登入！可嘗試登入次數：";
    $LANG_SESSION_AUTH_RETRY_LOCK      = "登入錯誤次數超過3次，已被鎖定此帳號，請於30分鐘後在重新登入！";
    $LANG_SESSION_AUTH_VALIDATE_FAILURE= "驗證碼認證錯誤！";
    $LANG_SESSION_AUTH_VALIDATE_EXPIRE = "驗證碼過期,請重新登入。";
    $LANG_SESSION_KEEP_TIME            = "登入持續時間";
    $LANG_SESSION_KEEP_TIME_24H        = "1天";
    $LANG_SESSION_KEEP_TIME_168H       = "1周( 7天 )";
    $LANG_SESSION_KEEP_TIME_720H       = "1個月( 30天 )";
    $LANG_SESSION_KEEP_TIME_2160H      = "3個月( 90天 )";

    // 使用者相關
    $LANG_USER_WELCOME                 = "歡迎您來到999康養財富計劃";
    $LANG_USER_LOGIN                   = "使用者登入";
    $LANG_USER_ACCOUNT                 = "帳號";
    $LANG_USER_PASSWORD                = "密碼";
    $LANG_USER_VALIDATECODE            = "驗證碼";
    $LANG_USER_VALIDATECODE_PLACEHOLDER = "請輸入驗證碼";
    $LANG_USER_SIGNIN                  = "登入";
    $LANG_USER_SIGNIN_KEEP             = "記住密碼";
    $LANG_USER_REPASSWORD              = "確認密碼";
    $LANG_USER_NEED_REPASSWORD         = "請重覆輸入密碼";
    $LANG_USER_FORGET_PASS             = "忘記密碼";
    $LANG_USER_REPASSWORD_ERROR        = "兩次密碼輸入的不一致";
    $LANG_USER_AUTH_SUCCESS            = "已認證";
    $LANG_USER_AUTH_FAILURE            = "未認證";
    $LANG_USER_GRADE                   = "會員等級";
    $LANG_USER_NUMBER                  = "會員編號";
    $LANG_USER_SINGUP_TIME             = "註冊時間";
    $LANG_USER_BONUS_CAPITAL           = "獎金帳戶";
    $LANG_USER_BONUS_BALANCE           = "財富金";
    $LANG_USER_BONUS_FUND              = "康養積分";
    $LANG_USER_JOIN_TEXT               = "加入";

    // 系統
    $LANG_SYSTEM_BONUS_STORED          = "儲值";
    $LANG_SYSTEM_BONUS_TRANSFER        = "互轉";
    $LANG_SYSTEM_READ_MORE             = "查看更多";
    $LANG_SYSTEM_NEWS                  = "公告";
    $LANG_SYSTEM_NEWS_TIME             = "發佈時間";
    $LANG_SYSTEM_NEWS_CONTENT          = "公告內容";
    $LANG_SYSTEM_COMMON_FUNC           = "常用功能";
    $LANG_SYSTEM_COMMON_FUNC_1         = "註冊會員";
    $LANG_SYSTEM_COMMON_FUNC_2         = "帳戶明細";
    $LANG_SYSTEM_COMMON_FUNC_3         = "接點查詢";
    $LANG_SYSTEM_COMMON_FUNC_4         = "提現申請";
    $LANG_SYSTEM_COMMON_FUNC_5         = "聯繫客服";
    $LANG_SYSTEM_COMMON_FUNC_5         = "聯繫客服";
    $LANG_SYSTEM_USER_PV               = "我的PV收益";
    $LANG_SYSTEM_USER_PV_ADDITION      = "新增獎金";
    $LANG_SYSTEM_USER_PV_HISTORY       = "歷史獎金";
    $LANG_SYSTEM_USER_BUSINESS         = "我的業務資訊";
    $LANG_SYSTEM_USER_BUSINESS_LEVEL   = "目前層數";
    $LANG_SYSTEM_USER_BUSINESS_PROMOTE = "推薦人數";
    $LANG_SYSTEM_CURRENCY              = "幣別";
    $LANG_SYSTEM_CURRENCY_USD          = "美元";
    $LANG_SYSTEM_CURRENCY_NT           = "新台幣";
    $LANG_SYSTEM_CURRENCY_RMB          = "人民幣";
    $LANG_SYSTEM_DELETE_CONFIRM        = "你是否確定要刪除 %s 這筆資料？";
    $LANG_SYSTEM_ADD_DONE              = "新增完畢";
    $LANG_SYSTEM_EDIT_DONE             = "修改完畢";
    $LANG_SYSTEM_DEL_DONE              = "刪除完畢";
    $LANG_SYSTEM_ADD_BTN               = "新增";
    $LANG_SYSTEM_OPER_FAIL             = "操作失敗";
    $LANG_SYSTEM_AUTOCREATE            = "系統自動建立";

    // 通用
    $LANG_COMMON_TEXT_HOME             = "首頁";
    $LANG_COMMON_TEXT_LOADING          = "資料讀取中... 請稍候! <br/>Loading...";
    $LANG_COMMON_TEXT_MAINTAIN         = "資料維護";
    $LANG_COMMON_TEXT_OPER             = "操作";
    $LANG_COMMON_TEXT_VIEW             = "檢視";
    $LANG_COMMON_TEXT_ADD              = "新增";
    $LANG_COMMON_TEXT_EDIT             = "編輯";
    $LANG_COMMON_TEXT_DELETE           = "刪除";
    $LANG_COMMON_TEXT_LIST             = "列表";
    $LANG_COMMON_TEXT_REPORT           = "報表";
    $LANG_COMMON_TEXT_QUICK_ADD        = "快速新增";
    $LANG_COMMON_TEXT_QUICK_EDIT       = "快速編輯";
    $LANG_COMMON_TEXT_MUTLTI_EDIT      = "多筆編輯";
    $LANG_COMMON_TEXT_MUTLTI_DELETE    = "多筆刪除";
    $LANG_COMMON_TEXT_SELECT_ALL       = "全選";
    $LANG_COMMON_TEXT_SAVE             = "儲存";
    $LANG_COMMON_TEXT_CANCEL           = "取消";
    $LANG_COMMON_TEXT_CLOSE            = "關閉";
    $LANG_COMMON_TEXT_OK               = "確定";
    $LANG_COMMON_TEXT_PAGE             = "第 <b> %s </b> - <b> %s </b> 列 (共有 <b> %s </b> 列)";
    $LANG_COMMON_TEXT_PAGE_LENGTHMENU  = "顯示 %s 筆記錄";
    $LANG_COMMON_TEXT_PAGE_INFOEMPTY   = "沒有任何資料";
    $LANG_COMMON_TEXT_PAGE_ZERORECORD  = "沒有找到任何相符的資料";
    $LANG_COMMON_TEXT_DATA_EXPAND      = "全展開";
    $LANG_COMMON_TEXT_DATA_SHRINK      = "全收合";

    // roles
    $LANG_ROLES_OPER                   = "操作";
    $LANG_ROLES_HASHTAG                = "#";
    $LANG_ROLES_ID                     = "角色ID";
    $LANG_ROLES_NAME                   = "角色名稱";
    $LANG_ROLES_MEMO                   = "備註";
    $LANG_ROLES_AUTH                   = "授權";
    $LANG_ROLES_SYSTEM_CREATE          = "系統自動建立";

    // user_authlog / userrole_authlog
    $LANG_USERAUTH_USER                = "使用者";
    $LANG_USERAUTH_ROLE                = "角色";
    $LANG_USERAUTH_ACTIVE              = "開啟授權";
    $LANG_USERAUTH_ACTIVE_ITEM         = "使用者授權表ID";
    $LANG_USERAUTH_PERIOD              = "授權期間";
    $LANG_USERAUTH_START_TIME          = "授權開始日期";
    $LANG_USERAUTH_END_TIME            = "授權結束日期";
    $LANG_USERAUTH_CANCEL_CONFIRM_PREFIX  = "是否要取消";
    $LANG_USERAUTH_CANCEL_CONFIRM_POSTFIX = "的授權";

    // webconfig
    $LANG_WEBCONFIG_SETTING            = "網站內容設定";
    $LANG_WEBCONFIG_SETTING_OPEN       = "開啟";
    $LANG_WEBCONFIG_SETTING_CLOSE      = "關閉";
    $LANG_WEBCONFIG_WEB_NAME           = "網站名稱";
    $LANG_WEBCONFIG_WEB_ENAME          = "網站縮寫";
    $LANG_WEBCONFIG_WEB_IMG            = "圖片";
    $LANG_WEBCONFIG_WEB_IMG_THUMBNAIL  = "目前使用圖片";
    $LANG_WEBCONFIG_WEB_SHRINKTITLE    = "縮收時呈現方式";
    $LANG_WEBCONFIG_WEB_SHRINKTITLE_T  = "網站縮寫";
    $LANG_WEBCONFIG_WEB_SHRINKTITLE_P  = "圖片";
    $LANG_WEBCONFIG_WEB_MEMO           = "備註";
    $LANG_WEBCONFIG_LOGIN_TIMES        = "網站最高可嘗試登錄次數";
    $LANG_WEBCONFIG_SEO_NAME           = "SEO網站名稱";
    $LANG_WEBCONFIG_SEO_KEYWORD        = "SEO網站關鍵字";
    $LANG_WEBCONFIG_SEO_DESCR          = "SEO網站描述";
    $LANG_WEBCONFIG_SMTP_SETTING       = "郵件寄送設定";
    $LANG_WEBCONFIG_SMTP_ACTIVE        = "是否開啟信箱";
    $LANG_WEBCONFIG_SMTP_MAIL_ACCOUNT  = "使用者帳號";
    $LANG_WEBCONFIG_SMTP_MAIL_PW       = "使用者密碼";
    $LANG_WEBCONFIG_SMTP_AUTH          = "SMTP是否加密";
    $LANG_WEBCONFIG_SMTP_SECURE        = "SMTP加密方式";
    $LANG_WEBCONFIG_SMTP_HOST          = "SMTP主機";
    $LANG_WEBCONFIG_SMTP_PORT          = "SMTP連接埠";


    // 會員管理
    $LANG_PROGRAM_PROGCODE_COL_1       = "";





    /**
     * ----------------
     *   toolkits用,宣告全域變數
     * ----------------
     */
    //toolkits用
    $GLOBALS['tk_lang'] = [
        "LANG_REQUIRED"           => "此欄位不可空白!",
        "LANG_QTIP_EMAIL_TITLE"   => "電子信箱",
        "LANG_QTIP_EMAIL_TEXT"    => "格式為",
        "LANG_QTIP_DEFAULT_TITLE" => "標題",
        "LANG_QTIP_DEFAULT_TEXT"  => "內容",
        "LANG_IMG_TITLE"          => "圖片預覽",
        "LANG_PWD_VALUE"          => "產生亂碼",
        "LANG_CHECKREPEAT_TEXT"   => "有重複的資料",
    ];

    //toolkits的validator用,
    $GLOBALS["validator_lang"] = [
        "LANG_REQUIRED" => "這個欄位是必填的11",
        "LANG_REMOTE" => "請修正這個錯誤",
        "LANG_EMAIL" => "請輸入正確格式的電子信箱",
        "LANG_URL" => "請輸入正確的網址",
        "LANG_DATE" => "請輸入正確的日期格式",
        "LANG_DATE_ISO" => "日期格式，格式必需為YYYY/MM/DD、YYYY-MM-DD、YYYYMMDD",
        "LANG_NUMBER" => "請輸入正確格式的號碼",
        "LANG_DIGITS" => "只能輸入數字",
        "LANG_CREDITCARD" => "請輸入正確的信用卡號",
        "LANG_EXTENSION" => "請輸入有效的後綴",
        "LANG_MAXLENGTH" => "不能輸入超過 {0} 個字元",
        "LANG_MINLENGTH" => "至少需輸入大於 {0} 個字元",
        "LANG_RANGELENGTH" => "輸入需介於 {0} 和 {1} 的字元數.",
        "LANG_RANGE" => "請輸入範圍在 {0} 到 {1} 之間的數值",
        "LANG_MAX" => "請輸入小於 {0} 的數字.",
        "LANG_MIN" => "请請輸入大於 {0} 的數字.",
        "LANG_" => "",
    ];

    /**
     * ----------------
     *   toolkits用
     * ----------------
     */
    $GLOBALS["dt_lang"] = [
        "LANG_COLUMN_MODAL_LABEL" => "欄位(顯示/隱藏)設定",
        "LANG_COLUMN_MODAL_SAVE"  => "確定",
        "LANG_COLUMN_BUTTON_TEXT" => "顯示/隱藏欄位",
    ];


?>
