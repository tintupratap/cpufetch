#ifndef __ASCII__
#define __ASCII__

#define COLOR_BLACK   "\x1b[30;1m"
#define COLOR_RED     "\x1b[31;1m"
#define COLOR_GREEN   "\x1b[32;1m"
#define COLOR_YELLOW  "\x1b[33;1m"
#define COLOR_BLUE    "\x1b[34;1m"
#define COLOR_MAGENTA "\x1b[35;1m"
#define COLOR_CYAN    "\x1b[36;1m"
#define COLOR_WHITE   "\x1b[37;1m"

struct ascii_logo {
  char* art;
  uint32_t width;
  uint32_t height;
  char* color_ascii[8];
  char* color_text[2];
};

//           1         2         3         4         5         6
//0123456789012345678901234567890123456789012345678901234567890
#define ASCII_AMD \
"$C2           ':::::::::::::::                \
$C2              ,ccccccccccccc               \
$C2                       .cccc               \
$C2               ;.      .cccc               \
$C2             ::c.      .cccc               \
$C2            :ccc.      .cccc               \
$C2            cccc:::::.   :cc               \
$C2            ccccccc.       ;               \
                                           \
$C1    @@@@      @@@       @@@   @@@@@@@@     \
$C1   @@@@@@     @@@@@   @@@@@   @@@    @@@   \
$C1  @@@  @@@    @@@@@@@@@@@@@   @@@      @@  \
$C1 @@@    @@@   @@@  @@@  @@@   @@@      @@  \
$C1@@@@@@@@@@@@  @@@       @@@   @@@    @@@   \
$C1@@@      @@@  @@@       @@@   @@@@@@@@@    "

//           1         2         3         4         5         6
//  123456789012345678901234567890123456789012345678901234567890
#define ASCII_INTEL \
"$C1                              ################                \
$C1                      #######                #######          \
$C1                 ####                              ####       \
$C1             ###                                     ####     \
$C1        ###                                             ###   \
$C1        ###                                             ###   \
$C1     #                    ###                ###        ###   \
$C1   ##   ###   #########   ######   ######    ###        ###   \
$C1  ##    ###   ###    ###  ###    ####  ####  ###        ###   \
$C1 ##     ###   ###    ###  ###    ###    ###  ###       ###    \
$C1##      ###   ###    ###  ###    ##########  ###     ####     \
$C1##      ###   ###    ###  ###    ###         ###   #####      \
$C1##       ##   ###    ###   #####  #########   ##  ###         \
$C1###                                                           \
$C1 ###                                                          \
$C1 ####                                        ####             \
$C1   #####                               ##########             \
$C1     ##########               ################                \
$C1         ###############################                      "

#define ASCII_SNAPD \
"                                                              \
                     $C1@@$C2########                               \
                  $C1@@@@@$C2###########                            \
            $C1@@  @@@@@$C2#################                        \
          $C1@@@@@@@@@@$C2####################                      \
         $C1@@@@@@@@@@@@$C2#####################                    \
        $C1@@@@@@@@@@@@@@@$C2####################                   \
        $C1@@@@@@@@@@@@@@@@@$C2###################                  \
        $C1@@@@@@@@@@@@@@@@@@@@$C2################                  \
           $C1@@@@@@@@@@@@@@@@@@@@$C2#############                  \
              $C1@@@@@@@@@@@@@@@@@@$C2############                  \
       $C1@          @@@@@@@@@@@@@@@$C2###########                  \
        $C1@@@@@       @@@@@@@@@@@@@$C2##########                   \
         $C1@@@@@@@@@   @@@@@@@@@@@@$C2########                     \
           $C1@@@@@@@@@  @@@@@@@@@@$C2#######                       \
              $C1@@@@@@@@@@@@@@@@$C2#######                         \
                  $C1@@@@$C2###########                             \
                                                              \
                                                              "

#define ASCII_MTK \
"                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
      $C1##  ## ######  ######  #     ### $C2@@@@@@ @@@@@@ @@  @@   \
     $C1### ### #       #    #  #    ####   $C2@@   @      @@ @@    \
    $C1######## # ###   #    #  #   ## ##   $C2@@   @ @@@  @@@@     \
   $C1## ### ## #       #    #  #  ##  ##   $C2@@   @      @@ @@    \
  $C1##  ##  ## ######  #####   # ##   ##   $C2@@   @@@@@@ @@  @@   \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              "

#define ASCII_EXYNOS \
"                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                         $C1##  ##  ##                           \
                           $C1##  ##                             \
                             $C1##                               \
                           $C1##  ##                             \
                         $C1##  ##  ##                           \
                                                                 \
                         $C2SAMSUNG                              \
                         $C2Exynos                               \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              "

#define ASCII_KIRIN \
"                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
$C1                                   #######                    \
$C1       #####             ####################                 \
$C1          ######################################              \
$C1            #######################################           \
$C1               #######################################        \
$C1                 ##############################               \
$C1                ##########################                    \
$C1             #########################                        \
$C1          ########################                           \
$C1        ########################                              \
$C1     #########################                                \
$C1   #########################                                  \
                                                              \
                                                              "

#define ASCII_BROADCOM \
"                                                              \
                    ################                          \
               ##########################                     \
            ################################                  \
          ################@@@@################                \
         ################@@@@@@################               \
        #################@@@@@@#################              \
       #################@@@@@@@@#################             \
       #################@@@@@@@@#################             \
       ################@@@@##@@@@################             \
       ################@@@@##@@@@################             \
       ###############@@@@####@@@@###############             \
        @@@@@@@@@@####@@@@####@@@@####@@@@@@@@@@              \
         ######@@@@@@@@@@######@@@@@@@@@@######               \
           ##################################                 \
             ##############################                   \
                ########################                      \
                    ###############                           \
                                                              "

#define ASCII_ARM \
"                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
      ############     ##########   ####  ######  ########    \
   ###############     #########    #######################   \
  ####        ####     ####         #####   #######   #####   \
 ####         ####     ####         ####     #####     ####   \
 ####         ####     ####         ####     ####      ####   \
  ####       #####     ####         ####     ####      ####   \
   ###############     ####         ####     ####      ####   \
    ########  ####     ####         ####     ####      ####   \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              "

// jp2a --height=17 ibm.jpg
#define ASCII_IBM \
"                                                              \
                                                              \
                                                              \
 ############ ################   ##########        ########## \
                                                              \
 ############ ################## ############    ############ \
                                                              \
    ######       ######    ######    ####################     \
                                                              \
    ######       ##############      ####################     \
                                                              \
    ######       ######    ######    #####  ######  #####     \
                                                              \
 ############ ################## #########   ####   ######### \
                                                              \
 ############ ################   #########    ##    ######### \
                                                              \
                                                              \
                                                              "


#define ASCII_UNKNOWN \
"                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              \
                                                              "

//                                         LOGO            W   H   COLORS LOGO (>0 && <10)     COLORS TEXT (=2)
//                                         --------------------------------------------------------------------------------
static struct ascii_logo logo_amd      = { ASCII_AMD,      43, 15, {COLOR_WHITE, COLOR_GREEN}, {COLOR_WHITE, COLOR_GREEN}  };
static struct ascii_logo logo_intel    = { ASCII_INTEL,    62, 19, {COLOR_CYAN},               {COLOR_CYAN,  COLOR_WHITE}  };
static struct ascii_logo logo_snapd    = { ASCII_SNAPD,    62, 19, {COLOR_RED, COLOR_WHITE},   {COLOR_RED,   COLOR_WHITE}  };
static struct ascii_logo logo_mtk      = { ASCII_MTK,      62, 19, {COLOR_BLUE, COLOR_YELLOW}, {COLOR_BLUE,  COLOR_YELLOW} };
static struct ascii_logo logo_exynos   = { ASCII_EXYNOS,   62, 19, {COLOR_BLUE, COLOR_WHITE},  {COLOR_BLUE,  COLOR_WHITE}, };
static struct ascii_logo logo_kirin    = { ASCII_KIRIN,    62, 19, {COLOR_WHITE, COLOR_RED},   {COLOR_WHITE, COLOR_RED}    };
static struct ascii_logo logo_broadcom = { ASCII_BROADCOM, 62, 19, {COLOR_WHITE, COLOR_RED},   {COLOR_WHITE, COLOR_RED}    };
static struct ascii_logo logo_arm      = { ASCII_ARM,      62, 19, {COLOR_CYAN},               {COLOR_WHITE,  COLOR_CYAN}  };
static struct ascii_logo logo_ibm      = { ASCII_IBM,      62, 19, {COLOR_CYAN, COLOR_WHITE},  {COLOR_CYAN, COLOR_WHITE},  };
static struct ascii_logo logo_unknown  = { ASCII_UNKNOWN,  62, 19, {COLOR_BLUE},               {COLOR_BLUE}                };

static struct ascii_logo* ASCII_ARRAY [] = {
  &logo_amd,
  &logo_intel,
  &logo_snapd,
  &logo_mtk,
  &logo_exynos,
  &logo_kirin,
  &logo_broadcom,
  &logo_arm,
  &logo_ibm,
  &logo_unknown
};

#endif
