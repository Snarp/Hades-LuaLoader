#pragma once

// Pretty much this entire file is ripped from the game

namespace engine::hades
{

	struct PlayerUnitData
	{
		float mDoubleClickSpeed;
		float mMinMoveDistance;
		float mReticleMoveSpeed;
		float mReticleMagnetismDistance;
		float mReticleMagnetismSpeed;
		float mReticleReMagnetizeTimeout;
		float mReticleMoveDelay;
		float mMaskHue;
		float mMaskHue2;
		float mMaskSaturationAddition;
		float mMaskSaturationAddition2;
		float mMaskValueAddition;
		float mMaskValueAddition2;
		bool mDisableHueMasks;
		int mPlayerIndex;
		bool mAIControlled;
		bool mCanAutoUse;
	};

	struct LifeData
	{
		bool mInvulnerable;
		std::string mInvulnerableFx;
		float mCollisionDamageMultiplier;
		float mArmorCoverage;
		float mInvulnerableCoverage;
		std::string mDeathGraphic;
		std::string mDeathFx;
		std::string mHitGraphic;
		std::string mHitFx;
		std::string mHitFxInvulnerable;
		int mHitFxCap;
		std::string mDamagedAnimation;
		std::string mReflectFx;
		engine::misc::SoundCue mDeathSound;
		engine::misc::SoundCue mHitSound;
		int mSoundManagerCap;
		float mReflection;
		float mReflectionChance;
		float mReflectionSpread;
		float mLobReflectionSpeedMultiplier;
		float mReflectionSpeedMultiplier;
		std::string mReflectionAnimation;
		bool mHomingEligible;
		bool mJumpTargetEligible;
		bool mRequiresDamageToAffect;
		float mProjectileHealModifier;
		float mProjectileHealCap;
		bool mProjectilesAlwaysPenetrate;
		bool mProjectilesCanPenetrate;
		bool mCanBeCrit;
		bool mDieOnCollision;
		float mDieOnCollisionRequiredVelocity;
		float mDieOnCollisionRequiredVelocityMultiplier;
		float mOnDamagedSpin;
	};

	struct MoveAIData : public engine::hades::GameData
	{
		bool mStopToRotate;
		bool mSlowToRotate;
		bool mMoveWithoutPath;
		bool mStayOnCamera;
		bool mFinishAtGoal;
		bool mRequiresLoS;
		bool mIgnoreTargetForLoS;
		BYTE mAlgorithm[1];
		float mNodeDistance;
		float mAlternateNodeDistance;
		float mNodeSuccessDistance;
		float mNodeSuccessDistanceRequiresLoS;
		float mLookAheadDistance;
		float mLookBehindDistance;
		float mFailedPathfindTimeout;
		float mRepathDelayMin;
		float mRepathDelayMax;
		float mRepathTargetMoveDistance;
		float mRepathTimeout;
		float mAvoidLocationDistance;
		float mSuccessDistance;
		float mLookAheadMultiplier;
		float mTargetHeadingShift;
		int mNodeCountLimit;
		int mSkippedNodeLimit;
		BYTE mOnFailBehavior[1];
	};

	class UnitData : public engine::hades::GameData
	{
	public:
		engine::hades::LifeData* mLifeData;
		engine::hades::ThingData* mThingData;
		engine::hades::MoveAIData* mMoveAiData;
		bool mDebugDraw;
		bool mPlayerControlled;
		bool mDisplayInEditor;
		engine::misc::HashGuid mMoveGraphic;
		engine::misc::HashGuid mMaxSpeedAnimation;
		engine::misc::HashGuid mLowSpeedAnimation;
		engine::misc::HashGuid mHighSpeedAnimation;
		float mHighSpeedThreshold;
		engine::misc::HashGuid mStartGraphic;
		engine::misc::HashGuid mStopGraphic;
		bool mFinishMoveAnimationOnIdle;
		bool mCanMove;
		bool mCanAttack;
		float mSpeed;
		float mAcceleration;
		float mDeceleration;
		float mLowSpeedThreshold;
		float mLowSpeedFraction;
		bool mCanOnlyMoveForward;
		bool mHaltOnSlowMovement;
		float mFullControlVelocityThreshold;
		float mTouchdownVelocityRetention;
		bool mCanVelocityBeAbsorbed;
		float mRotationSpeed;
		float mRotationAcceleration;
		float mCosmeticRotationSpeed;
		bool mCosmeticallyTargetPlayerUnit;
		float mLeftAngleClamp;
		float mLeftAngleHardClamp;
		float mRightAngleClamp;
		float mRightAngleHardClamp;
		float mSlowEffectModifier;
		float mStunBreakModifier;
		float mCharmBreakModifier;
		bool mCollideWithObstacles;
		bool mCollideWithUnits;
		bool mStopShiftOnCollision;
		float mBackpedalSpeedModifier;
		bool mSpawnFacingPlayer;
		float mDefaultAngle;
		bool mRandomDefaultAngle;
		engine::misc::HashGuid mOnHitWeapon;
		bool mOnHitWeaponRequiresMissedArmor;
		engine::misc::HashGuid mOnDeathWeapon;
		engine::misc::HashGuid mOnTouchdownWeapon;
		engine::misc::HashGuid mOnStunWeapon;
		engine::misc::HashGuid mOnStunAnimation;
		engine::misc::HashGuid mOnDodgeAnimation;
		engine::misc::HashGuid mOnDodgeFx;
		engine::misc::HashGuid mCollisionWeapon;
		float mCollisionWeaponRequiredVelocity;
		float mCollisionDamagePerVelocity;
		engine::misc::HashGuid mInitiatedCollisionWeapon;
		bool mAllowSelfCollisions;
		float mCollisionTriggerMinSpeed;
		engine::misc::HashGuid mContinuousWeapon;
		engine::misc::HashGuid mPriorityWeapon;
		bool mBlockAllEffects;
		bool mImmuneToStun;
		bool mImmuneToSlow;
		bool mImmuneToDoTs;
		bool mImmuneToCharm;
		bool mImmuneToSizeEffects;
		bool mImmuneToLifeSteal;
		bool mTraitorsTreatAsFriendly;
		bool mNoAllegiance;
		bool mFriendlyToPlayer;
		float mDamageOutputMultiplier;
		float mProjectileSpeedMultiplier;
		engine::misc::HashGuid mEffectDamageMultiplierName;
		int mEffectDamageMultiplierMinRequired;
		float mEffectDamageMultiplier;
		float mCritAddition;
		float mCritMultiplierAddition;
		float mObstacleDamageMultiplier;
		bool mIgnoreTargetCollision;
		bool mFinishAnimOnDeath;
		bool mRagDollOnDeath;
		float mDormantOnDeathDuration;
		float mMagnetism;
		engine::misc::HashGuid mMagnetismFx;
		float mPerfectChargeBonus;
		float mMaxUseZ;
		float mMaxCollisionZ;
		bool mAutoLockable;
		bool mAllDamageAffects;
		float mUseReach;
		bool mDraggable;
		bool mPathfindersPreferAvoid;
		float mPathfindersPreferAvoidBuffer;
		float mPathfindersPreferAvoidOverrideOffset;
		float mPathfindersPreferAvoidOverrideRadius;
		bool mBlockSpawns;
		float mDangerDistance;
		float mDangerDistanceVelocity;
		float mDangerDistanceDescendingZ;
		engine::misc::HashGuid mActivateEndFx;
		engine::hades::PlayerUnitData* mPlayerUnitData;
	};
}