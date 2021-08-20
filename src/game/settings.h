#include <ultra64.h>

extern char* gTitleString;

extern s8 configFullscreen;
#if defined(_WIN32) || defined(_WIN64)
extern s8 configCustomFullscreenResolution;
extern unsigned int configFullscreenWidth;
extern unsigned int configFullscreenHeight;
#endif
extern unsigned int configWindowWidth;
extern unsigned int configWindowHeight;
#if defined(_WIN32) || defined(_WIN64)
extern unsigned int configDefaultMonitor;
extern s8 configCustomInternalResolution;
extern unsigned int configInternalResolutionWidth;
extern unsigned int configInternalResolutionHeight;
#endif
extern unsigned int configGraphicsBackend;

extern float configOverallVolume;
extern float configSeqVolume[];

extern s8 config60FPS;
extern s8 configDisableDrawDistance;
extern float configDrawDistanceMultiplier;
extern s8 configDisableLowPolyModels;
extern unsigned int configTextureFiltering;
extern unsigned int configNoiseType;
extern s8 configForce4by3;

extern s8 gImprovedControls;
extern s8 gImprovedSwimming;
extern s8 gImprovedHanging;
extern s8 configEnemyBouncing;
extern s8 gDpadControls;
extern s8 gFullAirControl;
extern s8 gDisableBLJ;

extern s8 gFixVariousBugs;
extern s8 gRespawnBlueCoinSwitch;
extern s8 gRemoveAnnoyingWarps;
extern s8 gImprovePowerups;
extern s8 gBetterBlastAwayTheWall;
extern s8 gDisableBooDialogue;
extern s8 gTalkEasier;
extern s8 gDisableFallDamage;
extern s8 gLeaveAnyTime;
extern s8 gVisibleSecrets;
extern s8 configFixBombClip;

extern s8 configBowsersSub;
extern unsigned int gStayInLevel;
extern s8 gSkipStarSelect;
extern s8 gRestartLevelAfterStar;
extern s8 gSkipCutscenes;

extern s8 gCenterCameraButton;
extern s8 gImprovedCamera;
extern s8 gVerticalCamera;
extern s8 gInvertedCamera;
extern s8 gInvertedVerticalCamera;
extern float gCameraSpeed;
extern float gAdditionalCameraDistance;
extern float gAdditionalFOV;

extern unsigned int configCustomCameraMode;
extern s8 configCustomCameraPan;
extern s8 configCustomCameraTilt;
extern s8 configCustomCameraRotation;
extern s8 configCustomCameraCollisions;
extern float configCustomCameraDistanceDefault;
extern float configCustomCameraDistanceZoomedOut;

extern s8 gQuitOption;
extern unsigned int gHudStyle;
extern s8 gCenterHud;
extern s8 gHudStars;
extern s8 configAddZeroes;
extern s8 gShow100CoinStar;
extern s8 gAlwaysShowHealth;
extern s8 gHUDFiltering;
extern s8 gHideHud;

extern s8 gMouseCam;
extern float gMouseSensitivity;
extern unsigned int configMouseLeft;
extern unsigned int configMouseRight;
extern unsigned int configMouseMiddle;
extern unsigned int configMouseWheelUp;
extern unsigned int configMouseWheelDown;

extern s8 gWallSliding;
extern s8 gGroundPoundJump;
extern s8 gSunshineDive;
extern s8 gOdysseyDive;
extern s8 gFlashbackPound;

extern s8 gPyramidCutscene;
extern s8 gUnusedSounds;
extern s8 gPenguinSadEyes;
extern s8 gTwirlTripleJump;
extern s8 gSpawnSparkles;
extern s8 gReplaceKeysWithStars;

extern unsigned int gLifeMode;
extern unsigned int gEncoreMode;
extern unsigned int gGreenDemon;
extern s8 gNoHealingMode;
extern s8 gHardSave;
extern s8 gDaredevilSave;
extern s8 gHardcoreSave;
extern s8 gCasualMode;

extern s8 gDebugMovementMode;
extern s8 gDebugCapChanger;
extern unsigned int gMoonJump;
extern s8 configGodMode;
extern s8 configHyperspeedMode;
extern s8 gFlexibleCannons;
extern unsigned int configCoinStarCoins;

extern s8 gPaperMode;
extern s8 gFXMode;
#if defined(_WIN32) || defined(_WIN64)
extern s8 gWireframeMode;
#endif
extern s8 gDisableLighting;
extern s8 gForceLowPoly;

extern unsigned int configColorHatRLight;
extern unsigned int configColorHatRDark;
extern unsigned int configColorHatGLight;
extern unsigned int configColorHatGDark;
extern unsigned int configColorHatBLight;
extern unsigned int configColorHatBDark;

extern unsigned int configColorOverallsRLight;
extern unsigned int configColorOverallsRDark;
extern unsigned int configColorOverallsGLight;
extern unsigned int configColorOverallsGDark;
extern unsigned int configColorOverallsBLight;
extern unsigned int configColorOverallsBDark;

extern unsigned int configColorShoesRLight;
extern unsigned int configColorShoesRDark;
extern unsigned int configColorShoesGLight;
extern unsigned int configColorShoesGDark;
extern unsigned int configColorShoesBLight;
extern unsigned int configColorShoesBDark;

extern unsigned int configColorSkinRLight;
extern unsigned int configColorSkinRDark;
extern unsigned int configColorSkinGLight;
extern unsigned int configColorSkinGDark;
extern unsigned int configColorSkinBLight;
extern unsigned int configColorSkinBDark;

extern unsigned int configColorHairRLight;
extern unsigned int configColorHairRDark;
extern unsigned int configColorHairGLight;
extern unsigned int configColorHairGDark;
extern unsigned int configColorHairBLight;
extern unsigned int configColorHairBDark;


#if defined(_WIN32) || defined(_WIN64)
extern unsigned int configFullscreenRefreshRate;
#endif

extern unsigned int configButtonA;
extern unsigned int configButtonB;
extern unsigned int configButtonX;
extern unsigned int configButtonY;
extern unsigned int configButtonStart;
extern unsigned int configButtonSelect;
extern unsigned int configButtonL;
extern unsigned int configButtonR;
extern unsigned int configButtonZL;
extern unsigned int configButtonZR;
extern unsigned int configButtonThumbLeft;
extern unsigned int configButtonThumbRight;
extern unsigned int gControllerLeftDeadzone;
extern unsigned int gControllerRightDeadzone;

extern unsigned int configKeyA;
extern unsigned int configKeyB;
extern unsigned int configKeyStart;
extern unsigned int configKeyL;
extern unsigned int configKeyR;
extern unsigned int configKeyZ;
extern unsigned int configKeyCUp;
extern unsigned int configKeyCDown;
extern unsigned int configKeyCLeft;
extern unsigned int configKeyCRight;
extern unsigned int configKeyStickUp;
extern unsigned int configKeyStickDown;
extern unsigned int configKeyStickLeft;
extern unsigned int configKeyStickRight;
extern unsigned int configKeyWalk;

extern s16 gCollectedStar;
extern s8 stay_in_level();
extern s8 restart_level_after_star();