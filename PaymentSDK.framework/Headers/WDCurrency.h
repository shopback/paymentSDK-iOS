//
//  WDCurrency.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/29/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of currencies supported by ElasticEngine
 */
typedef NS_ENUM(NSUInteger, WDCurrency) {
    /** Uninitialized or invalid value */
    WDCurrencyUndefined = 0,
    
    /** Andorran Peseta */
    WDCurrencyADP,
    /** Dirhams */
    WDCurrencyAED,
    /** Afghanis */
    WDCurrencyAFN,
    /** Leke */
    WDCurrencyALL,
    /** Drams */
    WDCurrencyAMD,
    /** Guilders (also called Florins) */
    WDCurrencyANG,
    /** Kwanza */
    WDCurrencyAOA,
    /** Pesos */
    WDCurrencyARS,
    /** Dollars */
    WDCurrencyAUD,
    /** Guilders (also called Florins) */
    WDCurrencyAWG,
    /** New Manats */
    WDCurrencyAZN,
    /** Convertible Marka */
    WDCurrencyBAM,
    /** Dollars */
    WDCurrencyBBD,
    /** Taka */
    WDCurrencyBDT,
    /** Leva */
    WDCurrencyBGN,
    /** Dinars */
    WDCurrencyBHD,
    /** Francs */
    WDCurrencyBIF,
    /** Dollars */
    WDCurrencyBMD,
    /** Dollars */
    WDCurrencyBND,
    /** Bolivianos */
    WDCurrencyBOB,
    /** Brazil Real */
    WDCurrencyBRL,
    /** Dollars */
    WDCurrencyBSD,
    /** Ngultrum */
    WDCurrencyBTN,
    /** Pulas */
    WDCurrencyBWP,
    /** Rubles */
    WDCurrencyBYR,
    /** Dollars */
    WDCurrencyBZD,
    /** Dollars */
    WDCurrencyCAD,
    /** Congolese Francs */
    WDCurrencyCDF,
    /** Francs */
    WDCurrencyCHF,
    /** Unidades de formento */
    WDCurrencyCLF,
    /** Pesos */
    WDCurrencyCLP,
    /** Yuan Renminbi */
    WDCurrencyCNY,
    /** Pesos */
    WDCurrencyCOP,
    /** Colones */
    WDCurrencyCRC,
    /** Pesos */
    WDCurrencyCUP,
    /** Escudos */
    WDCurrencyCVE,
    /** Pounds (expires 2008-Jan-31) */
    WDCurrencyCYP,
    /** Koruny */
    WDCurrencyCZK,
    /** Default */
    WDCurrencyDEF,
    /** Francs */
    WDCurrencyDJF,
    /** Kroner */
    WDCurrencyDKK,
    /** Pesos */
    WDCurrencyDOP,
    /** Algeria Dinars */
    WDCurrencyDZD,
    /** Krooni */
    WDCurrencyEEK,
    /** Pounds */
    WDCurrencyEGP,
    /** Nakfa */
    WDCurrencyERN,
    /** Birr */
    WDCurrencyETB,
    /** Euro */
    WDCurrencyEUR,
    /** Dollars */
    WDCurrencyFJD,
    /** Pounds */
    WDCurrencyFKP,
    /** Pounds */
    WDCurrencyGBP,
    /** Lari */
    WDCurrencyGEL,
    /** Pounds */
    WDCurrencyGGP,
    /** Cedis */
    WDCurrencyGHS,
    /** Pounds */
    WDCurrencyGIP,
    /** Dalasi */
    WDCurrencyGMD,
    /** Francs */
    WDCurrencyGNF,
    /** Quetzales */
    WDCurrencyGTQ,
    /** Dollars */
    WDCurrencyGYD,
    /** Dollars */
    WDCurrencyHKD,
    /** Lempiras */
    WDCurrencyHNL,
    /** Kuna */
    WDCurrencyHRK,
    /** Gourdes */
    WDCurrencyHTG,
    /** Forint */
    WDCurrencyHUF,
    /** Rupiahs */
    WDCurrencyIDR,
    /** New Shekels */
    WDCurrencyILS,
    /** Pounds */
    WDCurrencyIMP,
    /** Rupees */
    WDCurrencyINR,
    /** Dinars */
    WDCurrencyIQD,
    /** Rials */
    WDCurrencyIRR,
    /** Kronur */
    WDCurrencyISK,
    /** Pounds */
    WDCurrencyJEP,
    /** Dollars */
    WDCurrencyJMD,
    /** Dinars */
    WDCurrencyJOD,
    /** Yen */
    WDCurrencyJPY,
    /** Shillings */
    WDCurrencyKES,
    /** Soms */
    WDCurrencyKGS,
    /** Riels */
    WDCurrencyKHR,
    /** Francs */
    WDCurrencyKMF,
    /** Won */
    WDCurrencyKPW,
    /** Won */
    WDCurrencyKRW,
    /** Dinars */
    WDCurrencyKWD,
    /** Dollars */
    WDCurrencyKYD,
    /** Tenge */
    WDCurrencyKZT,
    /** Kips */
    WDCurrencyLAK,
    /** Pounds */
    WDCurrencyLBP,
    /** Rupees */
    WDCurrencyLKR,
    /** Dollars */
    WDCurrencyLRD,
    /** Maloti */
    WDCurrencyLSL,
    /** Litai */
    WDCurrencyLTL,
    /** Lati */
    WDCurrencyLVL,
    /** Dinars */
    WDCurrencyLYD,
    /** Airline Miles */
    WDCurrencyM_M,
    /** Dirhams */
    WDCurrencyMAD,
    /** Lei */
    WDCurrencyMDL,
    /** Ariary */
    WDCurrencyMGA,
    /** Denars */
    WDCurrencyMKD,
    /** Kyats */
    WDCurrencyMMK,
    /** Tugriks */
    WDCurrencyMNT,
    /** Patacas */
    WDCurrencyMOP,
    /** Ouguiyas */
    WDCurrencyMRO,
    /** Liri (expires 2008-Jan-31) */
    WDCurrencyMTL,
    /** Rupees */
    WDCurrencyMUR,
    /** Rufiyaa */
    WDCurrencyMVR,
    /** Kwachas */
    WDCurrencyMWK,
    /** Pesos */
    WDCurrencyMXN,
    /** Ringgits */
    WDCurrencyMYR,
    /** Meticais */
    WDCurrencyMZN,
    /** Dollars */
    WDCurrencyNAD,
    /** Nairas */
    WDCurrencyNGN,
    /** Cordobas */
    WDCurrencyNIO,
    /** Krone */
    WDCurrencyNOK,
    /** Nepal Rupees */
    WDCurrencyNPR,
    /** Dollars */
    WDCurrencyNZD,
    /** Rials */
    WDCurrencyOMR,
    /** Balboa */
    WDCurrencyPAB,
    /** Nuevos Soles */
    WDCurrencyPEN,
    /** Kina */
    WDCurrencyPGK,
    /** Pesos */
    WDCurrencyPHP,
    /** Rupees */
    WDCurrencyPKR,
    /** Zlotych */
    WDCurrencyPLN,
    /** Guarani */
    WDCurrencyPYG,
    /** Rials */
    WDCurrencyQAR,
    /** New Lei */
    WDCurrencyRON,
    /** Dinars */
    WDCurrencyRSD,
    /** Rubles */
    WDCurrencyRUB,
    /** Rwanda Francs */
    WDCurrencyRWF,
    /** Riyals */
    WDCurrencySAR,
    /** Dollars */
    WDCurrencySBD,
    /** Rupees */
    WDCurrencySCR,
    /** Pounds */
    WDCurrencySDG,
    /** Kronor */
    WDCurrencySEK,
    /** Dollars */
    WDCurrencySGD,
    /** Pounds */
    WDCurrencySHP,
    /** Leones */
    WDCurrencySLL,
    /** Shillings */
    WDCurrencySOS,
    /** Luigini */
    WDCurrencySPL,
    /** Dollars */
    WDCurrencySRD,
    /** Dobras */
    WDCurrencySTD,
    /** Colones */
    WDCurrencySVC,
    /** Pounds */
    WDCurrencySYP,
    /** Emalangeni */
    WDCurrencySZL,
    /** Baht */
    WDCurrencyTHB,
    /** Somoni */
    WDCurrencyTJS,
    /** Manats */
    WDCurrencyTMM,
    /** Dinars */
    WDCurrencyTND,
    /** Pa’anga */
    WDCurrencyTOP,
    /** New Lira */
    WDCurrencyTRY,
    /** Dollars */
    WDCurrencyTTD,
    /** Tuvalu Dollars */
    WDCurrencyTVD,
    /** New Dollars */
    WDCurrencyTWD,
    /** Shillings */
    WDCurrencyTZS,
    /** Hryvnia */
    WDCurrencyUAH,
    /** Shillings */
    WDCurrencyUGX,
    /** Unknown */
    WDCurrencyUNK,
    /** Dollars */
    WDCurrencyUSD,
    /** Pesos */
    WDCurrencyUYU,
    /** Sums */
    WDCurrencyUZS,
    /** Bolivares (expires 2008-Jun-30) */
    WDCurrencyVEB,
    /** Bolivares Fuertes */
    WDCurrencyVEF,
    /** Dong */
    WDCurrencyVND,
    /** Vatu */
    WDCurrencyVUV,
    /** Tala */
    WDCurrencyWST,
    /** Francs */
    WDCurrencyXAF,
    /** Ounces */
    WDCurrencyXAG,
    /** Ounces */
    WDCurrencyXAU,
    /** Dollars */
    WDCurrencyXCD,
    /** IMF */
    WDCurrencyXDR,
    /** Francs */
    WDCurrencyXOF,
    /** Ounces */
    WDCurrencyXPD,
    /** Francs */
    WDCurrencyXPF,
    /** Ounces */
    WDCurrencyXPT,
    /** Rials */
    WDCurrencyYER,
    /** Rand */
    WDCurrencyZAR,
    /** Kwacha */
    WDCurrencyZMK,
    /** Zimbabwe Dollars */
    WDCurrencyZWD,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDCurrencyTotalNumber
};
NSString * WDCurrencyGetISOCode(WDCurrency currency);
WDCurrency WDCurrencyFromISOCode(NSString *code);

/** @} */
