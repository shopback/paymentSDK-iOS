//
//  WDLocale.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 11/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of Locales supported by ElasticEngine */
typedef NS_ENUM(NSUInteger, WDLocale) {
    /** Uninitialized or invalid value */
    WDLocaleUndefined = 0,

    /** Afrikaans                   Afrikaans */
    WDLocale_af,
    /** Arabic                      عربي */
    WDLocale_ar,
    /** Azerbaijani                 Azərbaycan */
    WDLocale_az,
    /** Belarusian                  Беларускія */
    WDLocale_be,
    /** Bulgarian                   Български */
    WDLocale_bg,
    /** Bengali                     বাঙ্গালী */
    WDLocale_bn,
    /** Catalan                     català */
    WDLocale_ca,
    /** Czech                       Česky */
    WDLocale_cs,
    /** Welsh                       Cymraeg */
    WDLocale_cy,
    /** Danish                      Dansk */
    WDLocale_da,
    /** German                      Deutsch */
    WDLocale_de,
    /** Greek                       Ελληνικά */
    WDLocale_el,
    /** English                     English */
    WDLocale_en,
    /** Esperanto                   Esperanto */
    WDLocale_eo,
    /** Spanish                     Español */
    WDLocale_es,
    /** Estonian                    Eesti */
    WDLocale_et,
    /** Basque                      Euskal */
    WDLocale_eu,
    /** Persian                     پارسی */
    WDLocale_fa,
    /** Finnish                     Suomi */
    WDLocale_fi,
    /** French                      Français */
    WDLocale_fr,
    /** Irish                       Gaeilge */
    WDLocale_ga,
    /** Galician                    Galicia */
    WDLocale_gl,
    /** Gujarati                    ગુજરાતી */
    WDLocale_gu,
    /** Hindi                       हिन्दी भाषा */
    WDLocale_hi,
    /** Croatian                    Hrvat */
    WDLocale_hr,
    /** Haitian Creole              kreyòl ayisyen */
    WDLocale_ht,
    /** Hungarian                   Magyar */
    WDLocale_hu,
    /** Armenian                    հայերեն */
    WDLocale_hy,
    /** Indonesian                  Bahasa Indonesia */
    WDLocale_id,
    /** Icelandic                   Icelandic */
    WDLocale_is,
    /** Italian                     Italiano */
    WDLocale_it,
    /** Hebrew                      עברית */
    WDLocale_iw,
    /** Japanese                    日本語 */
    WDLocale_ja,
    /** Georgian                    საქართველოს */
    WDLocale_ka,
    /** Kannadac                    Kannadac */
    WDLocale_kn,
    /** Korean                      한국어 */
    WDLocale_ko,
    /** Latin                       lingua latina */
    WDLocale_la,
    /** Lithuanian                  lietuvis */
    WDLocale_lt,
    /** Latvian                     latvietis */
    WDLocale_lv,
    /** Macedonian                  македонски */
    WDLocale_mk,
    /** Malay                       Melayu */
    WDLocale_ms,
    /** Maltese                     Malti */
    WDLocale_mt,
    /** Dutch                       Nederlands */
    WDLocale_nl,
    /** Norwegian                   Norsk */
    WDLocale_no,
    /** Polish                      Polski */
    WDLocale_pl,
    /** Portuguese                  Português */
    WDLocale_pt,
    /** Romanian                    Română */
    WDLocale_ro,
    /** Russian                     Русский */
    WDLocale_ru,
    /** Slovak                      slovenčina */
    WDLocale_sk,
    /** Slovenian                   Slovenski jezik */
    WDLocale_sl,
    /** Albanian                    shqiptar */
    WDLocale_sq,
    /** Serbian                     Србин */
    WDLocale_sr,
    /** Swedish                     Svenska */
    WDLocale_sv,
    /** Swahili                     Svahili */
    WDLocale_sw,
    /** Tamil                       தமிழ் */
    WDLocale_ta,
    /** Telugu                      తెలుగు */
    WDLocale_te,
    /** Thai                        ภาษาไทย */
    WDLocale_th,
    /** Filipino                    Pilipino */
    WDLocale_tl,
    /** Turkish                     Türkçe */
    WDLocale_tr,
    /** Ukrainian                   Українська */
    WDLocale_uk,
    /** Urdu                        اردو */
    WDLocale_ur,
    /** Vietnamese                  ngôn ngư Việt nam */
    WDLocale_vi,
    /** Yiddish                     ייִדיש */
    WDLocale_yi,
    /** Chinese (Simplified)        中文（简体) */
    WDLocale_zh_CN,
    /** Chinese (Traditional)       中文（繁体） */
    WDLocale_zh_TW,

    /** Total number of values. It is used for validation and handled as invalid value */
    WDLocaleTotalNumber
};

/** @} */
