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
    $LANG_PAGE_DAILYCALCULATE_MSG      = "系統結算中，僅開放查詢動作，結算期間 00:00:00~04:00:00。";

    // Session(COOKIE) & Login
    $LANG_SESSION_ACTIVE               = "<p>目前你的瀏覽器未開啟COOKIE，無法進入。</p> <br / > 請開啟COOKIE後在登入。</p>";
    $LANG_SESSION_AUTH_SUCCESS         = "登入成功！";
    $LANG_SESSION_AUTH_SIGNOUT_SUCCESS = "登出成功！";
    $LANG_SESSION_AUTH_FAILURE         = "帳號或密碼輸入錯誤，請重新登入！";
    $LANG_SESSION_AUTH_ACTIVE_STOP     = "您的帳號已經被停用！<br/>若有相關問題，請連絡客服人員";
    $LANG_SESSION_AUTH_ACTIVE_PROBLEM  = "您的帳號已經列為問題帳戶！<br/>若有相關問題，請連絡客服人員";
    $LANG_SESSION_AUTH_ACTIVE_DELETE   = "您的帳號已經被刪除！<br/>若有相關問題，請連絡客服人員";
    $LANG_SESSION_AUTH_LOCK            = "您的帳號已經被鎖定，<br/>請於 %s 分鐘後在重新登入！！";
    $LANG_SESSION_AUTH_LOCK_FOREVER    = "您的帳號已經被鎖定！<br/>若有相關問題，請連絡客服人員";
    $LANG_SESSION_AUTH_RETRY           = "帳號或密碼輸入錯誤，請重新登入！<br />可嘗試登入次數：";
    $LANG_SESSION_AUTH_RETRY_LOCK      = "登入錯誤次數超過 %s 次，已被鎖定此帳號，請於 %s 分鐘後在重新登入！";
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
    $LANG_USER_BONUS_FUND              = "健康積分";
    $LANG_USER_JOIN_TEXT               = "加入";
    $LANG_USER_EMAIL                   = "電子信箱";
    $LANG_USER_BACKTO_SIGNIN           = "返回登入頁";
    $LANG_USER_BACKTO_FORGETPWD        = "返回忘記密碼頁";
    $LANG_USER_EMAIL_NOACC_MSG         = "您的 <b class='text-blue'> %s  ( %s )</b> 電子信箱不存在, 請聯絡客服人員。";
    $LANG_USER_EMAIL_RESET_MSG         = "</p>您的 <b class='text-blue'> %s  ( %s )</b> 忘記密碼驗證信件已成功送出。</p>請您撥空檢視您的電子信箱，點選 <b class='text-red'>[重置密碼]</b> 連結，並於時效內完成密碼重置動作，如此才可保障您能隨時存取您的帳戶。";
    $LANG_USER_NEW_PASSWORD            = "新密碼";
    $LANG_USER_EMAIL_RESET_TITLE       = "密碼重置";
    $LANG_USER_EMAIL_RESET_SUBJECT     = "[ %s ] 密碼重置郵件";
    $LANG_USER_EMAIL_RESET_CONTENT     = "<p>您好， %s </p><p>您申請了重設密碼，請點選下方 [重置密碼] 連結，並於30分鐘內完成密碼重置動作，如此才可保障您能隨時存取您的帳戶。</p><p><a href=' %s '>重置密碼</a></p>";
    $LANG_USER_EMAIL_RESET_FAILURE_MSG = "<p>信件寄送失敗，請聯絡客服人員!</p>Mailer Error: ";
    $LANG_USER_EMAIL_RESET_ERROR       = "無效連結，請重新操作。";
    $LANG_USER_EMAIL_RESET_ERROR_TIMEOUT = "無效連結或操作逾時，請重新操作。";
    $LANG_USER_EMAIL_RESET_SUCCESS     = "密碼重置成功，請以新的密碼登入系統。";
    $LANG_USER_REPASSWORD2_AUTH_FAILURE= "二級密碼輸入錯誤，請重新輸入！";


    // 系統
    $LANG_SYSTEM_BONUS_STORED          = "儲值";
    $LANG_SYSTEM_BONUS_TRANSFER        = "互轉";
    $LANG_SYSTEM_CAPITAL_TO_BALANCE    = "轉入財富金";
    $LANG_SYSTEM_FUND_TO_MALL          = "轉入商城積分";
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
    $LANG_SYSTEM_AUTH_FAIL             = "程式認證失敗";
    $LANG_SYSTEM_AUTOCREATE            = "系統自動建立";

    // 通用
    $LANG_COMMON_TEXT_HOME             = "首頁";
    $LANG_COMMON_TEXT_LOADING          = "資料讀取中... 請稍候! <br/>Loading...";
    $LANG_COMMON_TEXT_MAINTAIN         = "資料維護";
    $LANG_COMMON_TEXT_OPER             = "操作";
    $LANG_COMMON_TEXT_OPER_INFO        = "操作訊息";
    $LANG_COMMON_TEXT_VIEW             = "檢視";
    $LANG_COMMON_TEXT_ADD              = "新增";
    $LANG_COMMON_TEXT_EDIT             = "編輯";
    $LANG_COMMON_TEXT_DELETE           = "刪除";
    $LANG_COMMON_TEXT_LIST             = "列表";
    $LANG_COMMON_TEXT_REPORT           = "報表";
    $LANG_COMMON_TEXT_QUICK_ADD        = "快速新增";
    $LANG_COMMON_TEXT_QUICK_EDIT       = "快速編輯";
    $LANG_COMMON_TEXT_MUTLTI_EDIT      = "多筆編輯";
    $LANG_COMMON_TEXT_MUTLTI_EDIT_TEXT = "請填入欲多筆統一修改的值，若不異動原始資料請保持欄位空白！";
    $LANG_COMMON_TEXT_MUTLTI_DELETE    = "多筆刪除";
    $LANG_COMMON_TEXT_SELECT_ALL       = "全選";
    $LANG_COMMON_TEXT_SAVE             = "儲存";
    $LANG_COMMON_TEXT_CANCEL           = "取消";
    $LANG_COMMON_TEXT_ACTIVE           = "啟用";
    $LANG_COMMON_TEXT_CLOSE            = "關閉";
    $LANG_COMMON_TEXT_SEND             = "送出";
    $LANG_COMMON_TEXT_OK               = "確定";
    $LANG_COMMON_QUERY                 = "查詢";
    $LANG_COMMON_TEXT_PAGE             = "第 <b> %s </b> - <b> %s </b> 列 (共有 <b> %s </b> 列)";
    $LANG_COMMON_TEXT_PAGE_LENGTHMENU  = "顯示 %s 筆記錄";
    $LANG_COMMON_TEXT_PAGE_INFOEMPTY   = "沒有任何資料";
    $LANG_COMMON_TEXT_PAGE_ZERORECORD  = "沒有找到任何相符的資料";
    $LANG_COMMON_TEXT_DATA_EXPAND      = "全展開";
    $LANG_COMMON_TEXT_DATA_SHRINK      = "全收合";
    $LANG_COMMON_TEXT_BASIC_INFO       = "基本資訊";
    $LANG_COMMON_TEXT_CREATE_INFO      = "創建資訊";
    $LANG_COMMON_TEXT_CREATE_OTHER     = "其他資訊";
    $LANG_COMMON_TEXT_CREATE_TIME      = "創建日期";
    $LANG_COMMON_TEXT_UPDATE_TIME      = "更新日期";
    $LANG_COMMON_TEXT_CREATE_USER      = "建立人員";
    $LANG_COMMON_TEXT_UPDATE_USER      = "更新人員";
    $LANG_COMMON_TEXT_YES              = "是";
    $LANG_COMMON_TEXT_NO               = "否";
    $LANG_COMMON_TEXT_LOCK             = "鎖定";
    $LANG_COMMON_TEXT_PASS             = "通過";
    $LANG_COMMON_TEXT_PASS_FAIL        = "未通過";
    $LANG_COMMON_TEXT_DONE             = "完成";
    $LANG_COMMON_TEXT_UNDONE           = "未完成";
    $LANG_COMMON_TEXT_GENDER_MALE      = "先生";
    $LANG_COMMON_TEXT_GENDER_FEMALE    = "小姐";
    $LANG_COMMON_TEXT_PW_MODIFY        = "(不修改密碼請保持欄位空白)";
    $LANG_COMMON_TEXT_DEF_SELECT       = "請選擇";
    $LANG_COMMON_TEXT_NORMAL           = "正常";
    $LANG_COMMON_TEXT_ABNORMAL         = "異常";
    $LANG_COMMON_CURR_PHOTO            = "目前使用圖片";
    $LANG_COMMON_QUERY_TIME            = "請選擇查詢日期";
    $LANG_COMMON_QUERY_FIELD_COPY      = "同上";

    // 授權 (Auth)
    $LANG_AUTH_LOGIN_TIMEOUT           = "登入資訊逾時,請重新登入";
    $LANG_AUTH_PROGRAM_UNAUTH          = "你沒有使用此程式的權限！";
    $LANG_AUTH_PROGRAM_UNACTIVE        = "此程序已經被系統關閉！請勿非法進入";
    $LANG_AUTH_PROGRAM_UNAUTH_LIST     = "你沒有使用'列表'的權限";
    $LANG_AUTH_PROGRAM_UNAUTH_VIEW     = "你沒有使用'檢視'的權限";
    $LANG_AUTH_PROGRAM_UNAUTH_ADD      = "你沒有使用'新增'的權限";
    $LANG_AUTH_PROGRAM_UNAUTH_EDIT     = "你沒有使用'修改'的權限";
    $LANG_AUTH_PROGRAM_UNAUTH_DEL      = "你沒有使用'刪除'的權限";
    $LANG_AUTH_PROGRAM_UNAUTH_REPORT   = "你沒有使用'報表'的權限";


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
    $LANG_WEBCONFIG_AUTO_DELOCK_MIN    = "鎖定自動解鎖時間(分)";
    $LANG_WEBCONFIG_AUTO_QTIP_TITLE    = "設定說明";
    $LANG_WEBCONFIG_AUTO_QTIP_BODY     = "<span class='text-red'><b>[ >0 ]</b></span>：設定幾分鐘後系統自動解鎖 <br/><span class='text-red'><b>[ -1 ]</b></span>：無限鎖定 (只能由管理者解鎖) <br/><span class='text-red'><b>[ 0 ]</b></span>: 不鎖定";
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


    // 程式管理 ( Programs )
    $LANG_PROGRAM_PROGRAMS_COL_pg_type      = "類型";
    $LANG_PROGRAM_PROGRAMS_COL_pg_code      = "代碼";
    $LANG_PROGRAM_PROGRAMS_COL_pg_name      = "名稱";
    $LANG_PROGRAM_PROGRAMS_COL_pg_level     = "階層";
    $LANG_PROGRAM_PROGRAMS_COL_pg_parent    = "父節點";
    $LANG_PROGRAM_PROGRAMS_COL_pg_order     = "排序";
    $LANG_PROGRAM_PROGRAMS_COL_is_auth      = "授權";
    $LANG_PROGRAM_PROGRAMS_COL_is_active    = "啟用";
    $LANG_PROGRAM_PROGRAMS_COL_is_visible   = "可見";
    $LANG_PROGRAM_PROGRAMS_COL_pg_descr     = "說明";
    $LANG_PROGRAM_PROGRAMS_COL_pg_html      = "網頁連結";
    $LANG_PROGRAM_PROGRAMS_COL_pg_icon      = "圖示";
    $LANG_PROGRAM_PROGRAMS_COL_trial_stime  = "試用開始時間";
    $LANG_PROGRAM_PROGRAMS_COL_trial_etime  = "試用結束時間";
    $LANG_PROGRAM_PROGRAMS_COL_is_new       = "是否顯示new";
    $LANG_PROGRAM_PROGRAMS_COL_is_new_stime = "顯示new 的開始時間";
    $LANG_PROGRAM_PROGRAMS_COL_is_new_etime = "顯示new 的結束時間";
    $LANG_PROGRAM_PROGRAMS_COL_unread_msg   = "未讀訊息";
    $LANG_PROGRAM_PROGRAMS_COL_is_remove    = "是否移除";
    $LANG_PROGRAM_PROGRAMS_COL_can_delete   = "是否可刪除";
    $LANG_PROGRAM_PROGRAMS_COL_memo         = "備註";
    $LANG_PROGRAM_PROGRAMS_FILTER_TYPE      = "類型篩選(全)";
    $LANG_PROGRAM_PROGRAMS_FILTER_PARENT    = "父節點篩選(全)";
    $LANG_PROGRAM_PROGRAMS_FILTER_LEVEL     = "階層篩選(全)";
    $LANG_PROGRAM_PROGRAMS_TRANS_YES        = "是";
    $LANG_PROGRAM_PROGRAMS_TRANS_NO         = "否";
    $LANG_PROGRAM_PROGRAMS_TRANS_ADMIN      = "後台";
    $LANG_PROGRAM_PROGRAMS_TRANS_WEB        = "前台";
    $LANG_PROGRAM_PROGRAMS_SELECT_NOPARENT  = "無父節點";


    // 網站管理者管理 ( Users )
    $LANG_PROGRAM_ACCOUNT_COL_user_id         = "帳號";
    $LANG_PROGRAM_ACCOUNT_COL_user_name       = "姓名";
    $LANG_PROGRAM_ACCOUNT_COL_user_img        = "照片";
    $LANG_PROGRAM_ACCOUNT_COL_user_role       = "角色";
    $LANG_PROGRAM_ACCOUNT_COL_locked_time     = "被鎖時間";
    $LANG_PROGRAM_ACCOUNT_COL_is_active       = "是否啟用";
    $LANG_PROGRAM_ACCOUNT_COL_user_pw         = "密碼";
    $LANG_PROGRAM_ACCOUNT_COL_user_email      = "信箱";
    $LANG_PROGRAM_ACCOUNT_COL_login_error     = "登入錯誤次數";
    $LANG_PROGRAM_ACCOUNT_COL_memo            = "備註";
    $LANG_PROGRAM_ACCOUNT_COL_LOCK            = "帳號被鎖";
    $LANG_PROGRAM_ACCOUNT_USER_AUTH           = "使用者授權管理";
    $LANG_PROGRAM_ACCOUNT_ROLE_AUTH           = "角色授權管理";
    $LANG_PROGRAM_ACCOUNT_OPERO_ACTIVE        = "啟用管理";
    $LANG_PROGRAM_ACCOUNT_MULTI_ACTIVE        = "多筆啟用管理";
    $LANG_PROGRAM_ACCOUNT_COL_FILTER_ROLES    = "角色篩選(全)";
    $LANG_PROGRAM_ACCOUNT_COL_FILTER_ACTIVITY = "是否啟用(全)";
    $LANG_PROGRAM_ACCOUNT_COL_FILTER_LOCKED   = "帳戶鎖定(全)";
    $LANG_PROGRAM_ACCOUNT_COL_ACCOUNT_PROBLEM = "問題帳戶";
    $LANG_PROGRAM_ACCOUNT_COL_REPEAT_CHECK    = "此帳號已經存在，請輸入其他帳號名稱";
    $LANG_PROGRAM_ACCOUNT_COL_QTIP_ID         = "1. 您之後登入此後台的帳號ID <br />( <span style='color:#F00;'>此欄位設定之後，將不可變更</span> ) <br />2. 帳號不可以輸入空白和特殊符號";

    // 使用者角色管理 ( UserRole )
    $LANG_PROGRAM_ROLES_COL_ur_id     = "角色ID";
    $LANG_PROGRAM_ROLES_COL_ur_name   = "角色名稱";
    $LANG_PROGRAM_ROLES_COL_ur_orders = "排序";
    $LANG_PROGRAM_ROLES_COL_is_active = "啟用";
    $LANG_PROGRAM_ROLES_COL_ur_descr  = "描述";
    $LANG_PROGRAM_ROLES_COL_ur_img    = "角色圖示";
    $LANG_PROGRAM_ROLES_COL_memo      = "備註";

    // 403 Forbidden 禁止操作
    $LANG_PROGRAM_WEB403_CODE    = "403";
    $LANG_PROGRAM_WEB403_HEADER  = "禁止操作";
    $LANG_PROGRAM_WEB403_CONTENT = "<p>您目前無權操作任何功能！</p><p>若有疑問，請洽<a href='messages_web.html'>客服人員</a>。</p>";

    // 會員管理: 會員列表 ( Member )
    $LANG_PROGRAM_MEMBER_COL_grade_id               = "配套等級";
    $LANG_PROGRAM_MEMBER_COL_membe_type             = "會員類型";
    $LANG_PROGRAM_MEMBER_COL_membe_type_E           = "企業會員";
    $LANG_PROGRAM_MEMBER_COL_membe_type_P           = "個人會員";
    $LANG_PROGRAM_MEMBER_COL_membe_account          = "會員帳號";
    $LANG_PROGRAM_MEMBER_COL_membe_name             = "名稱";
    $LANG_PROGRAM_MEMBER_COL_membe_f_membe_id       = "安置人";
    $LANG_PROGRAM_MEMBER_COL_membe_r_membe_id       = "推薦人";
    $LANG_PROGRAM_MEMBER_COL_check_real_name        = "實名審核";
    $LANG_PROGRAM_MEMBER_COL_status                 = "帳戶狀態";
    $LANG_PROGRAM_MEMBER_COL_status_1               = "申請中";
    $LANG_PROGRAM_MEMBER_COL_status_2               = "啟用";
    $LANG_PROGRAM_MEMBER_COL_status_3               = "凍結帳戶";
    $LANG_PROGRAM_MEMBER_COL_status_4               = "無效帳戶";
    $LANG_PROGRAM_MEMBER_COL_update_time            = "更新日期";
    $LANG_PROGRAM_MEMBER_COL_membe_first_pwd        = "會員密碼";
    $LANG_PROGRAM_MEMBER_COL_membe_second_pwd       = "二級密碼";
    $LANG_PROGRAM_MEMBER_COL_membe_nickname         = "暱稱";
    $LANG_PROGRAM_MEMBER_COL_membe_gender           = "性別";
    $LANG_PROGRAM_MEMBER_COL_membe_email            = "電子信箱";
    $LANG_PROGRAM_MEMBER_COL_membe_birth            = "生日";
    $LANG_PROGRAM_MEMBER_COL_membe_memo             = "備註";
    $LANG_PROGRAM_MEMBER_COL_membe_edit_btn         = "修改基本資料";
    $LANG_PROGRAM_MEMBER_BUSINESS_INFO              = "業務資訊";
    $LANG_PROGRAM_MEMBER_RECOMMEND_INFO             = "直推資訊";
    $LANG_PROGRAM_MEMBER_COL_mempe_left_area        = "左區推薦人數";
    $LANG_PROGRAM_MEMBER_COL_mempe_right_area       = "右區推薦人數";
    $LANG_PROGRAM_MEMBER_COL_mempe_recommend_bonus  = "直推總收益";
    $LANG_PROGRAM_MEMBER_COL_mempe_layer_bonus      = "層碰總收益";
    $LANG_PROGRAM_MEMBER_COL_mempe_pair_bonus       = "對碰總收益";
    $LANG_PROGRAM_MEMBER_COL_mempe_equal_bonus      = "對等總收益";
    $LANG_PROGRAM_MEMBER_COL_mempe_left_layer_save  = "左區層碰保留業績";
    $LANG_PROGRAM_MEMBER_COL_mempe_right_layer_save = "右區層碰保留業績";
    $LANG_PROGRAM_MEMBER_COL_mempe_left_pair_save   = "左區對碰保留業績";
    $LANG_PROGRAM_MEMBER_COL_mempe_right_pair_save  = "右區對碰保留業績";
    $LANG_PROGRAM_MEMBER_COL_mempe_left_sum_area    = "左區總業績";
    $LANG_PROGRAM_MEMBER_COL_mempe_right_sum_area   = "右區總業績";



    // 會員管理: 留言回覆 ( member_msg )
    $LANG_PROGRAM_MEMBERMSG_COL_membe_id      = "會員帳號";
    $LANG_PROGRAM_MEMBERMSG_COL_content       = "留言內容";
    $LANG_PROGRAM_MEMBERMSG_COL_status        = "回覆狀態";
    $LANG_PROGRAM_MEMBERMSG_COL_status_1      = "已回覆";
    $LANG_PROGRAM_MEMBERMSG_COL_status_2      = "未回覆";
    $LANG_PROGRAM_MEMBERMSG_COL_create_time   = "留言時間";
    $LANG_PROGRAM_MEMBERMSG_COL_reply         = "回覆";
    $LANG_PROGRAM_MEMBERMSG_COL_reply_content = "回覆內容";
    $LANG_PROGRAM_MEMBERMSG_COL_reply_time    = "回覆時間";


    // 配套等級 (Grade)
    $LANG_PROGRAM_GRADE_COL_grade_name        = "名稱";
    $LANG_PROGRAM_GRADE_COL_grade_level       = "等級";
    $LANG_PROGRAM_GRADE_COL_grade_pv          = "PV值";
    $LANG_PROGRAM_GRADE_COL_grade_money       = "金額";
    $LANG_PROGRAM_GRADE_COL_status            = "狀態";


    // 財務管理: 帳戶列表 (member_acc)
    $LANG_PROGRAM_MEMBERACC_COL_status        = "帳戶狀態";

    // 財務管理: (account/account_transfer/accountlog/account_handle/account_withdrawal/account_recharge)
    $LANG_PROGRAM_WEBACCOUNT_PAGE_HEADER                       = "獎金轉入財富金";
    $LANG_PROGRAM_WEBACCOUNT_FORM_ACCOUNT                      = "會員帳號";
    $LANG_PROGRAM_WEBACCOUNT_FORM_CAPITAL                      = "獎金餘額";
    $LANG_PROGRAM_WEBACCOUNT_FORM_BALANCE                      = "財富金餘額";
    $LANG_PROGRAM_WEBACCOUNT_FORM_TRANSFERMONEY                = "轉入財富金金額";
    $LANG_PROGRAM_WEBACCOUNT_FORM_TRANSFERACC                  = "轉入會員帳號";
    $LANG_PROGRAM_WEBACCOUNT_FORM_TRANSFERACC_INFO             = "轉入會員帳號訊息";
    $LANG_PROGRAM_WEBACCOUNT_FORM_TRANSFERACC_INFO_MSG         = "請輸入正確的會員帳號";
    $LANG_PROGRAM_WEBACCOUNT_FORM_TRANSFERACC_PLACEHOLDER      = "請輸入您要轉入的會員帳號";
    $LANG_PROGRAM_WEBACCOUNT_FORM_TRANSFERMONEY_PLACEHOLDER    = "請輸入您要轉入的金額";
    $LANG_PROGRAM_WEBACCOUNT_FORM_CONFIRM                      = "確定將獎金轉入財富金?";
    $LANG_PROGRAM_WEBACCOUNT_FORM_CONFIRM2                     = "確定將財富金轉入 %s ?";
    $LANG_PROGRAM_WEBACCOUNT_FORM_TRANSFER_LIMIT               = "輸入金額不得大於原始餘額！";
    $LANG_PROGRAM_WEBACCOUNT_FORM_TRANSFER_SUCCESS             = "轉入成功！";
    $LANG_PROGRAM_WEBACCOUNT_FORM_HEADER                       = "[ %s ] 密碼重置郵件";
    $LANG_PROGRAM_WEBACCOUNT_TRANSFER_MYSELF_ERROR             = "不能轉帳給自己！";
    $LANG_PROGRAM_WEBACCOUNT_TRANSFER_TO_MSGLOG                = "%s 獎金轉入財富金";
    $LANG_PROGRAM_WEBACCOUNT_TRANSFER_TO_MSGLOG2               = "%s 轉帳至 %s";
    $LANG_PROGRAM_WEBACCOUNT_TRANSFER_TO_MSGLOG3               = "提現扣款";
    $LANG_PROGRAM_WEBACCOUNT_TRANSFER_FROM_MSGLOG              = "%s 轉入 %s";
    $LANG_PROGRAM_WEBACCOUNT_FORM_WITHDRAWAL_LIMIT             = "最低申請金額<u class='mx-2'>%s</u>起。";
    $LANG_PROGRAM_WEBACCOUNT_FORM_BANK                         = "提現銀行";
    $LANG_PROGRAM_WEBACCOUNT_FORM_BANK_EMPTY                   = "請先添加銀行帳戶";
    $LANG_PROGRAM_WEBACCOUNT_FORM_BANK_SELECT_DEFAULT          = "請選擇提現銀行";
    $LANG_PROGRAM_WEBACCOUNT_FORM_WITHDRAWAL_MONEY             = "提現金額";
    $LANG_PROGRAM_WEBACCOUNT_FORM_WITHDRAWAL_MONEY_PLACEHOLDER = "請輸入您要提現的金額";
    $LANG_PROGRAM_WEBACCOUNT_FORM_WITHDRAWAL_CURRENCY          = "提現幣別";
    $LANG_PROGRAM_WEBACCOUNT_FORM_WITHDRAWAL_TOACCMONEY        = "折合金額";
    $LANG_PROGRAM_WEBACCOUNT_FORM_WITHDRAWAL_CONFIRM           = "確定送出提現申請?";
    $LANG_PROGRAM_WEBACCOUNT_FORM_WITHDRAWAL_SUCCESS           = "已送出提現申請！";
    $LANG_PROGRAM_WEBACCOUNT_REALNAME_UNCHECK                  = "請先完成實名認證，若有疑問請洽客服人員！";
    $LANG_PROGRAM_WEBACCOUNT_REALNAME_FILE_DOWNLOAD            = "下載實名認證申請書";

    // 財務管理: 提現記錄 (account_withdrawallog)
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_withd_curre_code        = "幣別";
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_withd_money             = "提現金額";
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_withd_price             = "PV";
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_withd_bank              = "銀行名稱";
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_withd_real_name         = "持卡人姓名";
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_withd_account           = "卡號";
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_withd_status            = "審核狀態";
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_withd_account_status    = "到帳狀態";
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_withd_account_status_1  = "未到帳";
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_withd_account_status_2  = "已到帳";
    $LANG_PROGRAM_WEBWITHDRAWALLOG_COL_create_time             = "申請日期";

    // 登入頁輪播(Banner_index)
    $LANG_PROGRAM_BANNER_INDEX_COL_banin_title = "名稱";
    $LANG_PROGRAM_BANNER_INDEX_COL_banin_img   = "圖片";
    $LANG_PROGRAM_BANNER_INDEX_COL_status      = "啟用狀態";


    // Dashboard頁輪播(Banner_dashboard)
    $LANG_PROGRAM_BANNER_DASHBOARD_COL_banda_title = "名稱";
    $LANG_PROGRAM_BANNER_DASHBOARD_COL_banda_img   = "圖片";
    $LANG_PROGRAM_BANNER_DASHBOARD_COL_status      = "啟用狀態";


    // 彈出式廣告(Banner_popup)
    $LANG_PROGRAM_BANNER_POPUP_COL_banner_title  = "標題";
    $LANG_PROGRAM_BANNER_POPUP_COL_banner_img    = "圖片";
    $LANG_PROGRAM_BANNER_POPUP_COL_status        = "啟用狀態";
    $LANG_PROGRAM_BANNER_POPUP_COL_banner_desc   = "內文";
    $LANG_PROGRAM_BANNER_POPUP_COL_banner_type   = "呈現方式";
    $LANG_PROGRAM_BANNER_POPUP_COL_banner_type_1 = "圖片型廣告";
    $LANG_PROGRAM_BANNER_POPUP_COL_banner_type_2 = "文字型廣告";

    // 系統公告(Notice)
    $LANG_PROGRAM_NOTICE_COL_notic_title  = "標題";
    $LANG_PROGRAM_NOTICE_COL_notic_date   = "編輯時間";
    $LANG_PROGRAM_NOTICE_COL_notic_detail = "內文";
    $LANG_PROGRAM_NOTICE_COL_status       = "啟用狀態";


    // 商品分類(Product_category)
    $LANG_PROGRAM_PRODUCTS_CATEGORY_COL_proca_name  = "名稱";
    $LANG_PROGRAM_PRODUCTS_CATEGORY_COL_status      = "啟用狀態";
    $LANG_PROGRAM_PRODUCTS_CATEGORY_COL_order       = "排序";
    $LANG_PROGRAM_PRODUCTS_CATEGORY_COL_can_delete  = "是否能刪除";


    // 商品(products)
    $LANG_PROGRAM_PRODUCTS_COL_proca_id     = "類別";
    $LANG_PROGRAM_PRODUCTS_COL_grade_id     = "配套等級";
    $LANG_PROGRAM_PRODUCTS_COL_produ_name   = "名稱";
    $LANG_PROGRAM_PRODUCTS_COL_produ_pv     = "pv值";
    $LANG_PROGRAM_PRODUCTS_COL_produ_img    = "圖片";
    $LANG_PROGRAM_PRODUCTS_COL_status       = "啟用狀態";
    $LANG_PROGRAM_PRODUCTS_COL_order        = "排序";
    $LANG_PROGRAM_PRODUCTS_COL_combination  = "組合產品";
    $LANG_PROGRAM_PRODUCTS_COL_produ_detail = "描述";
    $LANG_PROGRAM_PRODUCTS_COL_can_delete   = "是否能刪除";


    // 前台系統公告 (notice)
    $LANG_PROGRAM_WEBNOTICE_COL_notic_title = "主題";
    $LANG_PROGRAM_WEBNOTICE_COL_create_time = "發佈日期";
    $LANG_PROGRAM_WEBNOTICE_COL_notic_detail = "內文";


    // 前台聯絡客服
    $LANG_PROGRAM_WEBMESSAGES_COL_content       = "留言信息";
    $LANG_PROGRAM_WEBMESSAGES_COL_create_time   = "創建日期";
    $LANG_PROGRAM_WEBMESSAGES_COL_status        = "回覆狀態";
    $LANG_PROGRAM_WEBMESSAGES_COL_reply_content = "回覆信息";


    // 前台基本資料
    $LANG_PROGRAM_PERSONAL_WEB_COL_create_time = "註冊時間";
    $LANG_PROGRAM_PERSONAL_WEB_COL_member_text = "會員資訊";


    // 前台密碼修改
    $LANG_PROGRAM_PASSWORD_WEB_COL_membe_first_pwd_text = "修改一級密碼";
    $LANG_PROGRAM_PASSWORD_WEB_COL_membe_second_pwd_text = "修改二級密碼";
    $LANG_PROGRAM_PASSWORD_WEB_COL_incorrect_text  = "密碼不正確";
    $LANG_PROGRAM_PASSWORD_WEB_COL_membe_first_pwd = "一級密碼";


    // 前台銀行戶管理
    $LANG_PROGRAM_WEBBANK_COL_memba_name = "銀行名稱";
    $LANG_PROGRAM_WEBBANK_COL_memba_branch = "分行名";
    $LANG_PROGRAM_WEBBANK_COL_memba_account = "銀行卡號";
    $LANG_PROGRAM_WEBBANK_COL_memba_account_name = "帳戶名";


    // 前台收貨地址管理
    $LANG_PROGRAM_WEBADDRESS_COL_memad_ship_name = "收貨人";
    $LANG_PROGRAM_WEBADDRESS_COL_memad_phone     = "手機";
    $LANG_PROGRAM_WEBADDRESS_COL_memad_tel       = "市話";
    $LANG_PROGRAM_WEBADDRESS_COL_memad_country   = "國家";
    $LANG_PROGRAM_WEBADDRESS_COL_memad_province  = "省份";
    $LANG_PROGRAM_WEBADDRESS_COL_memad_city      = "縣市";
    $LANG_PROGRAM_WEBADDRESS_COL_memad_town      = "市鄉區鎮";
    $LANG_PROGRAM_WEBADDRESS_COL_memad_address   = "地址";
    $LANG_PROGRAM_WEBADDRESS_COL_memad_zip       = "郵遞區號";


    // 訂單管理
    $LANG_PROGRAM_ORDERS_COL_order_sn                = "訂單編號";
    $LANG_PROGRAM_ORDERS_COL_order_invoice           = "發票編號";
    $LANG_PROGRAM_ORDERS_COL_order_subscriber        = "訂購者";
    $LANG_PROGRAM_ORDERS_COL_order_account           = "新註冊的會員帳號";
    $LANG_PROGRAM_ORDERS_COL_order_fnode_account     = "安置人";
    $LANG_PROGRAM_ORDERS_COL_order_recommend_account = "推薦人";
    $LANG_PROGRAM_ORDERS_COL_order_area              = "位置";
    $LANG_PROGRAM_ORDERS_COL_order_price             = "價格";
    $LANG_PROGRAM_ORDERS_COL_order_pv                = "pv值";
    $LANG_PROGRAM_ORDERS_COL_order_consignee         = "收貨人名稱";
    $LANG_PROGRAM_ORDERS_COL_order_phone             = "用户手機";
    $LANG_PROGRAM_ORDERS_COL_order_country           = "國家";
    $LANG_PROGRAM_ORDERS_COL_order_province          = "省份";
    $LANG_PROGRAM_ORDERS_COL_order_city              = "縣市代碼";
    $LANG_PROGRAM_ORDERS_COL_order_town              = "市鄉區鎮代碼";
    $LANG_PROGRAM_ORDERS_COL_order_address           = "地址";
    $LANG_PROGRAM_ORDERS_COL_order_zip               = "郵遞區號";
    $LANG_PROGRAM_ORDERS_COL_order_status            = "付款狀態";
    $LANG_PROGRAM_ORDERS_COL_order_type              = "訂單類型";
    $LANG_PROGRAM_ORDERS_COL_make_type               = "操作類型";
    $LANG_PROGRAM_ORDERS_COL_pay_time                = "付款時間";
    $LANG_PROGRAM_ORDERS_COL_send_time               = "發貨時間";
    $LANG_PROGRAM_ORDERS_COL_finish_time             = "完成時間";
    $LANG_PROGRAM_ORDERS_COL_is_cum                  = "是否计算奖金";
    $LANG_PROGRAM_ORDERS_COL_reg_num                 = "註冊人數";
    $LANG_PROGRAM_ORDERS_COL_ship_status             = "發貨狀態";
    $LANG_PROGRAM_ORDERS_COL_create_time             = "下單時間";
    $LANG_PROGRAM_ORDERS_COL_order_pay_type          = "付款方式";
    $LANG_PROGRAM_ORDERS_COL_shiper_block            = "收貨人資料";
    $LANG_PROGRAM_ORDERS_COL_order_area_left         = "左區";
    $LANG_PROGRAM_ORDERS_COL_order_area_right        = "右區";
    $LANG_PROGRAM_ORDERS_COL_order_status_is_pay     = "已付款";
    $LANG_PROGRAM_ORDERS_COL_order_status_no_pay     = "未付款";
    $LANG_PROGRAM_ORDERS_COL_order_type_1            = "註冊";
    $LANG_PROGRAM_ORDERS_COL_order_type_2            = "升級";
    $LANG_PROGRAM_ORDERS_COL_order_pay_type_1        = "財富金";
    $LANG_PROGRAM_ORDERS_COL_order_pay_type_2        = "現金";
    $LANG_PROGRAM_ORDERS_COL_order_pay_type_3        = "信用卡轉帳";
    $LANG_PROGRAM_ORDERS_COL_ship_status_1           = "未發貨";
    $LANG_PROGRAM_ORDERS_COL_ship_status_2           = "已發貨";
    $LANG_PROGRAM_ORDERS_COL_ship_status_3           = "已完成";

    //業務管理
    $LANG_PROGRAM_NODETREE_COL_QUERY_MSG            = "請輸入會員帳號";
    $LANG_PROGRAM_NODETREE_COL_QUERY_BTN            = "接點查詢";
    $LANG_PROGRAM_NODETREE_COL_QUERY_SELF_BTN       = "返回自身結點";
    $LANG_PROGRAM_NODETREE_COL_POSITION_NOW         = "當前位置";
    $LANG_PROGRAM_NODETREE_COL_TABLE_TH_SUM         = "組織";
    $LANG_PROGRAM_NODETREE_COL_TABLE_TH_LAYER       = "未層碰";
    $LANG_PROGRAM_NODETREE_COL_TABLE_TH_PAIR        = "未對碰";
    $LANG_PROGRAM_NODETREE_COL_TRANSFER_FORTUNE_BTN = "轉帳";
    $LANG_PROGRAM_NODETREE_COL_NODE_NOT_EXIST       = "接點不存在，請重新查詢！";
    $LANG_PROGRAM_NODETREE_COL_NODE_UNSIGNUP        = "未註冊";
    $LANG_PROGRAM_NODETREE_COL_NODE_SIGNUP_BTN      = "註冊";
    $LANG_PROGRAM_NODETREE_COL_NODE_ACTIVE          = "啟用";
    $LANG_PROGRAM_NODETREE_COL_NODE_UNACTIVE        = "未啟用";
    $LANG_PROGRAM_NODETREE_COL_SHOW_NODE_TEXT       = "第%s層  %s %s  %s";  // 第n层  左區 暱稱 TWXXXXXXX
    $LANG_PROGRAM_NODETREE_COL_SHOW_NODE_LEFT       = "左區";
    $LANG_PROGRAM_NODETREE_COL_SHOW_NODE_RIGHT      = "右區";

    //業務管理: 直推會員列表
    $LANG_PROGRAM_WEBRCMMEMBER_COL_reg_membe_acc      = "會員帳號";
    $LANG_PROGRAM_WEBRCMMEMBER_COL_f_membe_acc        = "安置人帳號";
    $LANG_PROGRAM_WEBRCMMEMBER_COL_timestamp          = "加入時間";
    $LANG_PROGRAM_WEBRCMMEMBER_COL_intro_membe_area   = "區域";
    $LANG_PROGRAM_WEBRCMMEMBER_COL_intro_membe_area_1 = "左區";
    $LANG_PROGRAM_WEBRCMMEMBER_COL_intro_membe_area_2 = "右區 ";

    // 充值管理
    $LANG_PROGRAM_FM_RECHARGE_COL_membe_acc        = "會員帳戶";
    $LANG_PROGRAM_FM_RECHARGE_COL_membe_name       = "名稱";
    $LANG_PROGRAM_FM_RECHARGE_COL_recha_money      = "現金";
    $LANG_PROGRAM_FM_RECHARGE_COL_recha_memo       = "描述";
    $LANG_PROGRAM_FM_RECHARGE_COL_type             = "類型";
    $LANG_PROGRAM_FM_RECHARGE_COL_status           = "狀態";
    $LANG_PROGRAM_FM_RECHARGE_COL_create_time      = "申請日期";
    $LANG_PROGRAM_FM_RECHARGE_COL_status_1         = "已審核";
    $LANG_PROGRAM_FM_RECHARGE_COL_status_2         = "未審核";
    $LANG_PROGRAM_FM_RECHARGE_COL_type_1           = "手動";
    $LANG_PROGRAM_FM_RECHARGE_COL_type_2           = "轉帳";
    $LANG_PROGRAM_FM_RECHARGE_COL_btnStatus        = "批量審核";
    $LANG_PROGRAM_FM_RECHARGE_COL_single_btnStatus = "單筆審核";

    // 資金流水列表
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_membe_id        = "會員帳戶";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_account   = "帳戶";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_pv        = "PV值";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_detail    = "描述";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_type      = "操作類型";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_create_time     = "建立日期";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_account_1 = "總獎金";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_account_2 = "財富金";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_account_3 = "健康積分";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_type_1    = "充值";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_type_2    = "提現";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_type_3    = "轉出";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_type_4    = "轉入";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_type_5    = "註冊扣款";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_type_6    = "退款";
    $LANG_PROGRAM_FM_ACCOUNT_LOG_COL_acclo_type_7    = "轉財富金";


    // 前台訂單註冊
    $LANG_PROGRAM_WEBORDERS_COL_order_nickname          = "暱稱";
    $LANG_PROGRAM_WEBORDERS_COL_order_first_pwd         = "會員密碼";
    $LANG_PROGRAM_WEBORDERS_COL_order_repwd             = "確認密碼";
    $LANG_PROGRAM_WEBORDERS_COL_order_name              = "姓名";
    $LANG_PROGRAM_WEBORDERS_COL_order_type              = "類別";
    $LANG_PROGRAM_WEBORDERS_COL_order_phone             = "電話";
    $LANG_PROGRAM_WEBORDERS_COL_order_email             = "信箱";
    $LANG_PROGRAM_WEBORDERS_COL_order_shiper            = "收貨人";
    $LANG_PROGRAM_WEBORDERS_COL_order_city              = "縣市";
    $LANG_PROGRAM_WEBORDERS_COL_order_town              = "市鄉區鎮";
    $LANG_PROGRAM_WEBORDERS_COL_order_address           = "地址";
    $LANG_PROGRAM_WEBORDERS_COL_order_zip               = "郵遞區號";
    $LANG_PROGRAM_WEBORDERS_COL_order_country           = "選擇國別";
    $LANG_PROGRAM_WEBORDERS_COL_order_account           = "會員帳號";
    $LANG_PROGRAM_WEBORDERS_COL_order_recommend_account = "推薦人";
    $LANG_PROGRAM_WEBORDERS_COL_order_recommend_acc     = "直推人帳號";
    $LANG_PROGRAM_WEBORDERS_COL_order_fnode_account     = "安置人";
    $LANG_PROGRAM_WEBORDERS_COL_order_fnode_acc         = "安置人帳號";
    $LANG_PROGRAM_WEBORDERS_COL_order_area              = "位置";
    $LANG_PROGRAM_WEBORDERS_COL_order_area_1            = "左區";
    $LANG_PROGRAM_WEBORDERS_COL_order_area_2            = "右區";
    $LANG_PROGRAM_WEBORDERS_COL_order_reg_num           = "註冊人數";
    $LANG_PROGRAM_WEBORDERS_COL_order_grade             = "配套等級";
    $LANG_PROGRAM_WEBORDERS_COL_order_products          = "配套商品";
    $LANG_PROGRAM_WEBORDERS_COL_order_member_title      = "STEP1：填寫基本資料";
    $LANG_PROGRAM_WEBORDERS_COL_order_products_title    = "STEP2：選擇帳號及配套方案";
    $LANG_PROGRAM_WEBORDERS_COL_order_batch_text        = "批量註冊";
    $LANG_PROGRAM_WEBORDERS_COL_order_text              = "單筆註冊";
    $LANG_PROGRAM_WEBORDERS_COL_order_type_p            = "個人";
    $LANG_PROGRAM_WEBORDERS_COL_order_type_e            = "企業";
    $LANG_PROGRAM_WEBORDERS_COL_order_model_dbcheck     = "訂單資料確認";
    $LANG_PROGRAM_WEBORDERS_COL_order_no_people         = "查無此人";
    $LANG_PROGRAM_WEBORDERS_COL_order_err_text1         = "安置人不是推薦人區域的!!";
    $LANG_PROGRAM_WEBORDERS_COL_order_err_text2         = "未付款不可註冊!!";
    $LANG_PROGRAM_WEBORDERS_COL_order_create_acc        = "請產生一組會員帳號";
    $LANG_PROGRAM_WEBORDERS_COL_order_can_reg           = "可註冊!!";
    $LANG_PROGRAM_WEBORDERS_COL_order_not_reg           = "不可註冊!!";


    //獎勵管理: 週撥獎金
    $LANG_PROGRAM_BONUSWEEKLY_COL_daily_report               = "日結獎金報表";
    $LANG_PROGRAM_BONUSWEEKLY_COL_daily_date                 = "結算日期";
    $LANG_PROGRAM_BONUSWEEKLY_COL_daily_date_to              = "至";
    $LANG_PROGRAM_BONUSWEEKLY_COL_personal_info              = "個人訊息";
    $LANG_PROGRAM_BONUSWEEKLY_COL_bonus_info                 = "獎金訊息";
    $LANG_PROGRAM_BONUSWEEKLY_COL_membe_f_membe_acc          = "安置人帳號";
    $LANG_PROGRAM_BONUSWEEKLY_COL_membe_r_membe_acc          = "推薦人帳號";
    $LANG_PROGRAM_BONUSWEEKLY_COL_query_weekly               = "請選擇週日期";
    $LANG_PROGRAM_BONUSWEEKLY_COL_create_time                = "週日期";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_recommend_bonus      = "直推獎金";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_layer_bonus          = "層碰獎金";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_pair_bonus           = "對碰獎金";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_equal_bonus          = "對等獎金";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_bonus_total          = "獎金總合";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_bonus_receivable     = "應發獎金";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_bonus_capital        = "可提領獎金";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_bonus_diff           = "(級差獎金)";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_bonus_unquality      = "(無資格領取)";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_check                = "會員資格";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_bonus_check          = "完成";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_bonus_uncheck        = "未完成";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_check_l1r1           = "左一右一";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_check_l2r2           = "左二右二";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_layer_check          = "層碰獎資格";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_pair_check           = "對碰獎資格";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_equal_check          = "對等獎資格";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_recommend_bonus_src  = "直推獎金來源";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_layer_bonus_src      = "層碰獎金來源";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_pair_bonus_src       = "對碰獎金來源";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_equal_bonus_src      = "對等獎金來源";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_bonus_maker          = "產生用戶";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_achievement          = "計算業績";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_achievement_yestoday = "昨日保留業績";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_achievement_todey    = "今日新增業績";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_achievement_total    = "合計業績";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_achievement_save     = "剩餘";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_bonus                = "獎金";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_level                = "相對層級";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_child                = "代數";
    $LANG_PROGRAM_BONUSWEEKLY_COL_mempe_pos                  = "位置";
    $LANG_PROGRAM_BONUSWEEKLY_COL_status                     = "發放狀態";
    $LANG_PROGRAM_BONUSWEEKLY_COL_status_1                   = "未發放";
    $LANG_PROGRAM_BONUSWEEKLY_COL_status_2                   = "已發放";
    $LANG_PROGRAM_BONUSWEEKLY_COL_empty                      = "暫無";
    $LANG_PROGRAM_BONUSWEEKLY_COL_bonus_rules_title          = "應發獎金規則說明";
    $LANG_PROGRAM_BONUSWEEKLY_COL_bonus_rules_desc           = "<p><b>個人會員應發獎金</b><br />為獎金總合扣除10%個人所得稅及2%二代健保費後所得之金額。</p><b>公司會員應發獎金</b><br />為獎金總合，但需開立足額發票給公司。";


    //前台我的訂單
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_sn = "訂單編號";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_invoice = "發票編號";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_subscriber = "訂購者";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_account = "註冊的會員";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_fnode_account = "安置人";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_recommend_account = "推薦人";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_area = "位置";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_area_1 = "左邊";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_area_2 = "右邊";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_pv = "pv值";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_consignee = "收貨人名稱";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_status = "付款狀態";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_status_1 = "己付款";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_status_2 = "未付款";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_pay_time = "付款時間";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_send_time = "發貨時間";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_finish_time = "完成時間";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_ship_status = "發貨狀態";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_ship_status_1 = "未發";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_ship_status_2 = "已發";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_ship_status_3 = "完成";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_create_time = "註冊日期";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_btnPay = "付款";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_reg_msg = "註冊完畢";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_btnMPay = "多筆付款";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_btnCancel = "取消訂單";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_btnMCancel = "多筆取消訂單";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_confirm_pay = "總PV值為 %s ,是否付款?";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_confirm_cancel = "是否取消訂單?";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_userbonusbalance_text = "財富金不足!!";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_pay_msg = "付款完畢";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_cancel_msg = "取消完畢";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_grade = "配套等級";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_product = "配套商品";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_mtype = "會員類別";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_phone = "手機";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_email = "信箱";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_country = "國家";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_city = "縣市";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_town = "鄉鎮區";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_zip = "郵遞區號";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_address = "地址";
    $LANG_PROGRAM_WEBMEORDERS_COL_order_me_total_text = "訂單總量";

    // 會員管理: 實名審核資料
    $LANG_PROGRAM_MEMBERIDCARD_COL_header_1                = "申請資料";
    $LANG_PROGRAM_MEMBERIDCARD_COL_header_2                = "推薦安置資料";
    $LANG_PROGRAM_MEMBERIDCARD_COL_header_3                = "申請者銀行帳戶資料";
    $LANG_PROGRAM_MEMBERIDCARD_COL_membe_acc               = "會員帳號";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_name              = "姓名/公司名稱";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_principal         = "公司負責人";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_pid               = "身份證字號/公司統編";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_gender            = "性別";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_gender_1          = "男";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_gender_2          = "女";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_birth             = "出生日期(西元年月日)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_country           = "國家 (戶籍地址/公司登記地址)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_province          = "省份 (戶籍地址/公司登記地址)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_city              = "縣市代碼 (戶籍地址/公司登記地址)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_town              = "市鄉區鎮代碼 (戶籍地址/公司登記地址)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_address           = "戶籍地址/公司登記地址";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_zip               = "郵遞區號 (戶籍地址/公司登記地址)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_comm_country      = "國家 (通訊地址)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_comm_province     = "省份 (通訊地址)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_comm_city         = "縣市代碼 (通訊地址)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_comm_town         = "市鄉區鎮代碼 (通訊地址)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_comm_address      = "通訊地址";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_comm_zip          = "郵遞區號 (通訊地址)";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_phone             = "公司電話";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_tel               = "住宅電話";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_mobile            = "手機號碼";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_fax               = "傳真號碼";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_email             = "Email";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_f_membe_acc       = "安置人會員帳號";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_f_membe_name      = "安置人姓名";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_f_membe_area      = "安置位置";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_f_membe_area_1    = "左區";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_f_membe_area_2    = "右區";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_r_membe_acc       = "推薦人會員帳號";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_r_membe_name      = "推薦人姓名";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_r_membe_tel       = "推薦人電話";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_bank_name         = "銀行名稱/分行";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_bank_account_name = "戶名";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_bank_account      = "銀行帳號";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_bank_img          = "銀行存摺封面照片";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_positive_img      = "身份證正面照片";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memdo_negative_img      = "身份證反面照片";
    $LANG_PROGRAM_MEMBERIDCARD_COL_create_time             = "申請日期";
    $LANG_PROGRAM_MEMBERIDCARD_COL_load_member_btn         = "載入會員資料";
    $LANG_PROGRAM_MEMBERIDCARD_COL_memberdoc_exist_msg     = "會員實名認證申請已存在";

    // 後台-獎金管理
    $LANG_PROGRAM_BONUS_DIRECT_COL_reg_membe_acc                 = "提供用戶";
    $LANG_PROGRAM_BONUS_DIRECT_COL_receiving_membe_acc           = "獎勵用戶";
    $LANG_PROGRAM_BONUS_DIRECT_COL_timestamp                     = "時間";
    $LANG_PROGRAM_BONUS_DIRECT_COL_status                        = "狀態";
    $LANG_PROGRAM_BONUS_DIRECT_COL_status_1                      = "未審核";
    $LANG_PROGRAM_BONUS_DIRECT_COL_status_2                      = "已結算";
    $LANG_PROGRAM_BONUS_DIRECT_COL_achievement                   = "業績";
    $LANG_PROGRAM_BONUS_DIRECT_COL_bonus                         = "獎金";
    $LANG_PROGRAM_BONUS_EQUAL_COL_boneq_b_membe_acc              = "獎勵用戶";
    $LANG_PROGRAM_BONUS_EQUAL_COL_boneq_e_membe_acc              = "提供用戶";
    $LANG_PROGRAM_BONUS_EQUAL_COL_boneq_achievement              = "業績";
    $LANG_PROGRAM_BONUS_EQUAL_COL_boneq_num                      = "代數";
    $LANG_PROGRAM_BONUS_EQUAL_COL_bonus                          = "獎金";
    $LANG_PROGRAM_BONUS_EQUAL_COL_status                         = "狀態";
    $LANG_PROGRAM_BONUS_EQUAL_COL_status_1                       = "未審核";
    $LANG_PROGRAM_BONUS_EQUAL_COL_status_2                       = "已結算";
    $LANG_PROGRAM_BONUS_EQUAL_COL_status_3                       = "無資格領取";
    $LANG_PROGRAM_BONUS_EQUAL_COL_on_date                        = "時間";
    $LANG_PROGRAM_BONUS_LAYER_COL_f_membe_account                = "獎勵用戶";
    $LANG_PROGRAM_BONUS_LAYER_COL_bonla_floor                    = "相遇深度";
    $LANG_PROGRAM_BONUS_LAYER_COL_bonla_pos_one_acc              = "相遇會員1";
    $LANG_PROGRAM_BONUS_LAYER_COL_bonla_pos_two_acc              = "相遇會員2";
    $LANG_PROGRAM_BONUS_LAYER_COL_bonla_achievement              = "業績";
    $LANG_PROGRAM_BONUS_LAYER_COL_bonus                          = "獎金";
    $LANG_PROGRAM_BONUS_LAYER_COL_status                         = "狀態";
    $LANG_PROGRAM_BONUS_LAYER_COL_status_1                       = "未審核";
    $LANG_PROGRAM_BONUS_LAYER_COL_status_2                       = "已結算";
    $LANG_PROGRAM_BONUS_LAYER_COL_status_3                       = "無資格領取";
    $LANG_PROGRAM_BONUS_LAYER_COL_timestamp                      = "相遇時間";
    $LANG_PROGRAM_BONUS_PAIR_COL_b_membe_account                 = "獎勵用戶";
    $LANG_PROGRAM_BONUS_PAIR_COL_b_pos                           = "深度";
    $LANG_PROGRAM_BONUS_PAIR_COL_bonpa_area                      = "位置";
    $LANG_PROGRAM_BONUS_PAIR_COL_bonpa_left                      = "左區";
    $LANG_PROGRAM_BONUS_PAIR_COL_bonpa_right                     = "右區";
    $LANG_PROGRAM_BONUS_PAIR_COL_bonpa_save_achievement_yestoday = "昨日保留業績";
    $LANG_PROGRAM_BONUS_PAIR_COL_bonpa_achievement_today         = "今天新增業績";
    $LANG_PROGRAM_BONUS_PAIR_COL_bonpa_total_achievement         = "合計業績";
    $LANG_PROGRAM_BONUS_PAIR_COL_bonpa_achievement               = "計算業績";
    $LANG_PROGRAM_BONUS_PAIR_COL_bonpa_save_achievement          = "剩餘業績";
    $LANG_PROGRAM_BONUS_PAIR_COL_bonus                           = "獎金";
    $LANG_PROGRAM_BONUS_PAIR_COL_timestamp                       = "對碰時間";
    $LANG_PROGRAM_BONUS_PAIR_COL_status                          = "狀態";
    $LANG_PROGRAM_BONUS_PAIR_COL_status_1                        = "未審核";
    $LANG_PROGRAM_BONUS_PAIR_COL_status_2                        = "已結算";
    $LANG_PROGRAM_BONUS_PAIR_COL_status_3                        = "無資格領取";
    $LANG_PROGRAM_BONUS_PAIR_COL_status_4                        = "業績不足";
    $LANG_PROGRAM_BONUS_PAIR_COL_update_time                     = "更新時間";

    // 後台-組織管理
    $LANG_PROGRAM_ORGANIZE_COL_membe_account = "會員帳號";
    $LANG_PROGRAM_ORGANIZE_COL_node_pos      = "節點位置";
    $LANG_PROGRAM_ORGANIZE_COL_node_deep     = "深度";
    $LANG_PROGRAM_ORGANIZE_COL_create_time   = "建立日期";
    $LANG_PROGRAM_ORGANIZE_COL_update_time   = "更新日期";


    /**
     * ----------------
     *   modal用,宣告全域變數
     * ----------------
     */
    //toolkits用
    $GLOBALS['dm_lang'] = [
        "LANG_FOOTER_SAVE"    => "儲存",
        "LANG_FOOTER_CLOSE"   => "關閉",
    ];




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
        "LANG_REQUIRED" => "這個欄位是必填的",
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
