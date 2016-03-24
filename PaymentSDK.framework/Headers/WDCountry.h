//
//  WDCountry.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of countries supported by ElasticEngine */
typedef NS_ENUM(NSUInteger, WDCountry) {
    /** Uninitialized or invalid value */
    WDCountryUndefined = 0,
    
    /** ANDORRA */
    WDCountryAD,
    /** UNITED ARAB EMIRATES */
    WDCountryAE,
    /** AFGHANISTAN */
    WDCountryAF,
    /** ANTIGUA AND BARBUDA */
    WDCountryAG,
    /** ANGUILLA */
    WDCountryAI,
    /** ALBANIA */
    WDCountryAL,
    /** ARMENIA */
    WDCountryAM,
    /** NETHERLANDS ANTILLES */
    WDCountryAN,
    /** ANGOLA */
    WDCountryAO,
    /** ANTARCTICA */
    WDCountryAQ,
    /** ARGENTINA */
    WDCountryAR,
    /** AMERICAN SAMOA */
    WDCountryAS,
    /** AUSTRIA */
    WDCountryAT,
    /** AUSTRALIA */
    WDCountryAU,
    /** ARUBA */
    WDCountryAW,
    /** Åland Islands */
    WDCountryAX,
    /** AZERBAIJAN */
    WDCountryAZ,
    /** BOSNIA AND HERZEGOVINA */
    WDCountryBA,
    /** BARBADOS */
    WDCountryBB,
    /** BANGLADESH */
    WDCountryBD,
    /** BELGIUM */
    WDCountryBE,
    /** BURKINA FASO */
    WDCountryBF,
    /** BULGARIA */
    WDCountryBG,
    /** BAHRAIN */
    WDCountryBH,
    /** BURUNDI */
    WDCountryBI,
    /** BENIN */
    WDCountryBJ,
    /** Saint-Barthélemy */
    WDCountryBL,
    /** BERMUDA */
    WDCountryBM,
    /** BRUNEI DARUSSALAM */
    WDCountryBN,
    /** BOLIVIA, PLURINATIONAL STATE OF */
    WDCountryBO,
    /** BONAIRE SINT EUSTATIUS AND SABA */
    WDCountryBQ,
    /** BRAZIL */
    WDCountryBR,
    /** BAHAMAS */
    WDCountryBS,
    /** BHUTAN */
    WDCountryBT,
    /** BOUVET ISLAND */
    WDCountryBV,
    /** BOTSWANA */
    WDCountryBW,
    /** BELARUS */
    WDCountryBY,
    /** BELIZE */
    WDCountryBZ,
    /** CANADA */
    WDCountryCA,
    /** COCOS (KEELING) ISLANDS */
    WDCountryCC,
    /** CONGO, THE DEMOCRATIC REPUBLIC OF THE */
    WDCountryCD,
    /** CENTRAL AFRICAN REPUBLIC */
    WDCountryCF,
    /** CONGO */
    WDCountryCG,
    /** SWITZERLAND */
    WDCountryCH,
    /** Côte d’Ivoire */
    WDCountryCI,
    /** COOK ISLANDS */
    WDCountryCK,
    /** CHILE */
    WDCountryCL,
    /** CAMEROON */
    WDCountryCM,
    /** CHINA */
    WDCountryCN,
    /** COLOMBIA */
    WDCountryCO,
    /** COSTA RICA */
    WDCountryCR,
    /** CUBA */
    WDCountryCU,
    /** CAPE VERDE */
    WDCountryCV,
    /** CURACAO */
    WDCountryCW,
    /** CHRISTMAS ISLAND */
    WDCountryCX,
    /** CYPRUS */
    WDCountryCY,
    /** CZECH REPUBLIC */
    WDCountryCZ,
    /** GERMANY */
    WDCountryDE,
    /** DJIBOUTI */
    WDCountryDJ,
    /** DENMARK */
    WDCountryDK,
    /** DOMINICA */
    WDCountryDM,
    /** DOMINICAN REPUBLIC */
    WDCountryDO,
    /** ALGERIA */
    WDCountryDZ,
    /** ECUADOR */
    WDCountryEC,
    /** ESTONIA */
    WDCountryEE,
    /** EGYPT */
    WDCountryEG,
    /** WESTERN SAHARA */
    WDCountryEH,
    /** ERITREA */
    WDCountryER,
    /** SPAIN */
    WDCountryES,
    /** ETHIOPIA */
    WDCountryET,
    /** FINLAND */
    WDCountryFI,
    /** FIJI */
    WDCountryFJ,
    /** FALKLAND ISLANDS (MALVINAS) */
    WDCountryFK,
    /** MICRONESIA, FEDERATED STATES OF */
    WDCountryFM,
    /** FAROE ISLANDS */
    WDCountryFO,
    /** FRANCE */
    WDCountryFR,
    /** GABON */
    WDCountryGA,
    /** UNITED KINGDOM */
    WDCountryGB,
    /** GRENADA */
    WDCountryGD,
    /** GEORGIA */
    WDCountryGE,
    /** FRENCH GUIANA */
    WDCountryGF,
    /** GUERNSEY */
    WDCountryGG,
    /** GHANA */
    WDCountryGH,
    /** GIBRALTAR */
    WDCountryGI,
    /** GREENLAND */
    WDCountryGL,
    /** GAMBIA */
    WDCountryGM,
    /** GUINEA */
    WDCountryGN,
    /** GUADELOUPE */
    WDCountryGP,
    /** EQUATORIAL GUINEA */
    WDCountryGQ,
    /** GREECE */
    WDCountryGR,
    /** SOUTH GEORGIA AND THE SOUTH SANDWICH ISLANDS */
    WDCountryGS,
    /** GUATEMALA */
    WDCountryGT,
    /** GUAM */
    WDCountryGU,
    /** GUINEA-BISSAU */
    WDCountryGW,
    /** GUYANA */
    WDCountryGY,
    /** HONG KONG */
    WDCountryHK,
    /** HEARD ISLAND AND MCDONALD ISLANDS */
    WDCountryHM,
    /** HONDURAS */
    WDCountryHN,
    /** CROATIA */
    WDCountryHR,
    /** VATICAN CITY STATE */
    WDCountryHS,
    /** HAITI */
    WDCountryHT,
    /** HUNGARY */
    WDCountryHU,
    /** INDONESIA */
    WDCountryID,
    /** IRELAND */
    WDCountryIE,
    /** ISRAEL */
    WDCountryIL,
    /** ISLE OF MAN */
    WDCountryIM,
    /** INDIA */
    WDCountryIN,
    /** BRITISH INDIAN OCEAN TERRITORY */
    WDCountryIO,
    /** IRAQ */
    WDCountryIQ,
    /** IRAN, ISLAMIC REPUBLIC OF */
    WDCountryIR,
    /** ICELAND */
    WDCountryIS,
    /** ITALY */
    WDCountryIT,
    /** JERSEY */
    WDCountryJE,
    /** JAMAICA */
    WDCountryJM,
    /** JORDAN */
    WDCountryJO,
    /** JAPAN */
    WDCountryJP,
    /** KENYA */
    WDCountryKE,
    /** KYRGYZSTAN */
    WDCountryKG,
    /** CAMBODIA */
    WDCountryKH,
    /** KIRIBATI */
    WDCountryKI,
    /** COMOROS */
    WDCountryKM,
    /** SAINT KITTS AND NEVIS */
    WDCountryKN,
    /** KOREA, DEMOCRATIC PEOPLE'S REPUBLIC OF */
    WDCountryKP,
    /** KOREA, REPUBLIC OF */
    WDCountryKR,
    /** KUWAIT */
    WDCountryKW,
    /** CAYMAN ISLANDS */
    WDCountryKY,
    /** KAZAKHSTAN */
    WDCountryKZ,
    /** LAO PEOPLE'S DEMOCRATIC REPUBLIC */
    WDCountryLA,
    /** LEBANON */
    WDCountryLB,
    /** SAINT LUCIA */
    WDCountryLC,
    /** LIECHTENSTEIN */
    WDCountryLI,
    /** SRI LANKA */
    WDCountryLK,
    /** LIBERIA */
    WDCountryLR,
    /** LESOTHO */
    WDCountryLS,
    /** LITHUANIA */
    WDCountryLT,
    /** LUXEMBOURG */
    WDCountryLU,
    /** LATVIA */
    WDCountryLV,
    /** LIBYAN ARAB JAMAHIRIYA */
    WDCountryLY,
    /** MOROCCO */
    WDCountryMA,
    /** MONACO */
    WDCountryMC,
    /** MOLDOVA, REPUBLIC OF */
    WDCountryMD,
    /** MONTENEGRO */
    WDCountryME,
    /** SAINT MARTIN */
    WDCountryMF,
    /** MADAGASCAR */
    WDCountryMG,
    /** MARSHALL ISLANDS */
    WDCountryMH,
    /** MACEDONIA, THE FORMER YUGOSLAV REPUBLIC OF */
    WDCountryMK,
    /** MALI */
    WDCountryML,
    /** MYANMAR */
    WDCountryMM,
    /** MONGOLIA */
    WDCountryMN,
    /** MACAO */
    WDCountryMO,
    /** NORTHERN MARIANA ISLANDS */
    WDCountryMP,
    /** MARTINIQUE */
    WDCountryMQ,
    /** MAURITANIA */
    WDCountryMR,
    /** MONTSERRAT */
    WDCountryMS,
    /** MALTA */
    WDCountryMT,
    /** MAURITIUS */
    WDCountryMU,
    /** MALDIVES */
    WDCountryMV,
    /** MALAWI */
    WDCountryMW,
    /** MEXICO */
    WDCountryMX,
    /** MALAYSIA */
    WDCountryMY,
    /** MOZAMBIQUE */
    WDCountryMZ,
    /** NAMIBIA */
    WDCountryNA,
    /** NEW CALEDONIA */
    WDCountryNC,
    /** NIGER */
    WDCountryNE,
    /** NORFOLK ISLAND */
    WDCountryNF,
    /** NIGERIA */
    WDCountryNG,
    /** NICARAGUA */
    WDCountryNI,
    /** NETHERLANDS */
    WDCountryNL,
    /** NORWAY */
    WDCountryNO,
    /** NEPAL */
    WDCountryNP,
    /** NAURU */
    WDCountryNR,
    /** NIUE */
    WDCountryNU,
    /** NEW ZEALAND */
    WDCountryNZ,
    /** OMAN */
    WDCountryOM,
    /** PANAMA */
    WDCountryPA,
    /** PERU */
    WDCountryPE,
    /** FRENCH POLYNESIA */
    WDCountryPF,
    /** PAPUA NEW GUINEA */
    WDCountryPG,
    /** PHILIPPINES */
    WDCountryPH,
    /** PAKISTAN */
    WDCountryPK,
    /** POLAND */
    WDCountryPL,
    /** SAINT PIERRE AND MIQUELON */
    WDCountryPM,
    /** PITCAIRN */
    WDCountryPN,
    /** PUERTO RICO */
    WDCountryPR,
    /** PALESTINIAN TERRITORY, OCCUPIED */
    WDCountryPS,
    /** PORTUGAL */
    WDCountryPT,
    /** PALAU */
    WDCountryPW,
    /** PARAGUAY */
    WDCountryPY,
    /** QATAR */
    WDCountryQA,
    /** Réunion */
    WDCountryRE,
    /** ROMANIA */
    WDCountryRO,
    /** SERBIA */
    WDCountryRS,
    /** RUSSIAN FEDERATION */
    WDCountryRU,
    /** RWANDA */
    WDCountryRW,
    /** SAUDI ARABIA */
    WDCountrySA,
    /** SOLOMON ISLANDS */
    WDCountrySB,
    /** SEYCHELLES */
    WDCountrySC,
    /** SUDAN */
    WDCountrySD,
    /** SWEDEN */
    WDCountrySE,
    /** SINGAPORE */
    WDCountrySG,
    /** SAINT HELENA, ASCENSION AND TRISTAN DA CUNHA */
    WDCountrySH,
    /** SLOVENIA */
    WDCountrySI,
    /** SVALBARD AND JAN MAYEN */
    WDCountrySJ,
    /** SLOVAKIA */
    WDCountrySK,
    /** SIERRA LEONE */
    WDCountrySL,
    /** SAN MARINO */
    WDCountrySM,
    /** SENEGAL */
    WDCountrySN,
    /** SOMALIA */
    WDCountrySO,
    /** SURINAME */
    WDCountrySR,
    /** SOUTH SUDAN */
    WDCountrySS,
    /** SAO TOME AND PRINCIPE */
    WDCountryST,
    /** EL SALVADOR */
    WDCountrySV,
    /** SINT MAARTEN (DUTCH PART) */
    WDCountrySX,
    /** SYRIAN ARAB REPUBLIC */
    WDCountrySY,
    /** SWAZILAND */
    WDCountrySZ,
    /** TURKS AND CAICOS ISLANDS */
    WDCountryTC,
    /** CHAD */
    WDCountryTD,
    /** FRENCH SOUTHERN TERRITORIES */
    WDCountryTF,
    /** TOGO */
    WDCountryTG,
    /** THAILAND */
    WDCountryTH,
    /** TAJIKISTAN */
    WDCountryTJ,
    /** TOKELAU */
    WDCountryTK,
    /** TIMOR-LESTE */
    WDCountryTL,
    /** TURKMENISTAN */
    WDCountryTM,
    /** TUNISIA */
    WDCountryTN,
    /** TONGA */
    WDCountryTO,
    /** TURKEY */
    WDCountryTR,
    /** TRINIDAD AND TOBAGO */
    WDCountryTT,
    /** TUVALU */
    WDCountryTV,
    /** TAIWAN, PROVINCE OF CHINA */
    WDCountryTW,
    /** TANZANIA, UNITED REPUBLIC OF */
    WDCountryTZ,
    /** UKRAINE */
    WDCountryUA,
    /** UGANDA */
    WDCountryUG,
    /** UNITED STATES MINOR OUTLYING ISLANDS */
    WDCountryUM,
    /** UNITED STATES */
    WDCountryUS,
    /** URUGUAY */
    WDCountryUY,
    /** UZBEKISTAN */
    WDCountryUZ,
    /** HOLY SEE (VATICAN CITY STATE) */
    WDCountryVA,
    /** SAINT VINCENT AND THE GRENADINES */
    WDCountryVC,
    /** VENEZUELA, BOLIVARIAN REPUBLIC OF */
    WDCountryVE,
    /** VIRGIN ISLANDS, BRITISH */
    WDCountryVG,
    /** VIRGIN ISLANDS, U.S. */
    WDCountryVI,
    /** VIET NAM */
    WDCountryVN,
    /** VANUATU */
    WDCountryVU,
    /** WALLIS AND FUTUNA */
    WDCountryWF,
    /** SAMOA */
    WDCountryWS,
    /** NULL */
    WDCountryXX,
    /** YEMEN */
    WDCountryYE,
    /** MAYOTTE */
    WDCountryYT,
    /** SOUTH AFRICA */
    WDCountryZA,
    /** ZAMBIA */
    WDCountryZM,
    /** ZIMBABWE */
    WDCountryZW,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDCountryTotalNumber
};
NSString *WDCountryGetISOCode(WDCountry country);
WDCountry WDCountryFromISOCode(NSString *code);

/** @} */
