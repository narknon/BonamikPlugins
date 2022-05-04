#include "SQEX_KBD_Component.h"

class USQEX_KBD_Component;

void USQEX_KBD_Component::SQEX_SetEmissiveWindScale(const TArray<FName>& Groups, const float Scale, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_TurnOn(const TArray<FName>& Groups, float BlendTime) {
}

void USQEX_KBD_Component::SQEX_Bonamik_TurnOff(bool preserveLatestResult, const TArray<FName>& Groups, float BlendTime) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetWorldWindScale(const TArray<FName>& Groups, float Scale, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetWeight(float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetUpdateOnlyVisible(bool bUpdateOnlyVisible) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetUpdateOnlyRendered(bool bUpdateOnlyRendered) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetTeleportDistance(float Distance, int32 TeleportPreRollStep, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetSpeedRate(float SpeedRate, float SpeedRateChangeTime, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetPresetWindScale(const TArray<FName>& PresetNames, const float Scale) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetPreRoll(int32 Step, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetOuterConeScale(const TArray<FName>& Groups, float Scale, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetMeshSpaceSimulation(bool bMeshSpaceSimulation) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetMassScale(const TArray<FName>& Groups, float Scale, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetLocalForceScale(const TArray<FName>& Groups, float Scale, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetInnerConeScale(const TArray<FName>& Groups, float Scale, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetGroupWeight(const TArray<FName>& Groups, float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetGroupParamExt(const TArray<FSQEX_BonamikChangingParameterExt>& GroupParam) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetGroupParam(const TArray<FSQEX_BonamikChangingParameter>& GroupParam) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetGravity(const FVector& Gravity) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetExtendEmissiveWind(const TArray<FName>& Groups, TEnumAsByte<ESQEX_Bonamik_EmissiveDirection> DirectionSpace, const FVector& DirectionVec, float BaseStrength, float WaveAmplitude, float WaveFreq, float BlendTime, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetEnableGroundCollisionAll(bool bNewEnable) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetEnableGroundCollision(const TArray<FName>& Groups, bool bNewEnable) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetEnable(bool NewEnable) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetEmissiveWind(const TArray<FName>& Groups, TEnumAsByte<ESQEX_Bonamik_EmissiveDirection> DirectionSpace, const FVector& DirectionVec, float BaseStrength, float WaveAmplitude, float WaveFreq, float BlendTime, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetAutoDisable(bool AutoDisable) {
}

void USQEX_KBD_Component::SQEX_Bonamik_SetAnimPos(int32 BoneIndex, bool bForceSet) {
}

void USQEX_KBD_Component::SQEX_Bonamik_ScaleGroupParam(const TArray<FSQEX_BonamikChangingParameter>& GroupParam) {
}

void USQEX_KBD_Component::SQEX_Bonamik_RestoreGroupParamExt(const TArray<FSQEX_BonamikChangingParameterExt>& GroupParam) {
}

void USQEX_KBD_Component::SQEX_Bonamik_RestoreGroupParam(const TArray<FSQEX_BonamikChangingParameter>& GroupParam) {
}

void USQEX_KBD_Component::SQEX_Bonamik_RestoreDefaultParameters() {
}

void USQEX_KBD_Component::SQEX_Bonamik_ResetGravity() {
}

void USQEX_KBD_Component::SQEX_Bonamik_Reset(bool bResetPose, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_RemoveTemporaryCollision(int32 CollisionId) {
}

void USQEX_KBD_Component::SQEX_Bonamik_RemoveReferenceDefault(bool bEnableOtherInstance) {
}

void USQEX_KBD_Component::SQEX_Bonamik_RemoveReferenceCommon(USQEX_KBD_Component* OtherComponent) {
}

void USQEX_KBD_Component::SQEX_Bonamik_RemoveReferenceAll() {
}

void USQEX_KBD_Component::SQEX_Bonamik_RemoveReference(USQEX_KBD_Component* OtherComponent, const FString& ReferenceGroupName) {
}

void USQEX_KBD_Component::SQEX_Bonamik_ReinitializeSimulationPose() {
}

bool USQEX_KBD_Component::SQEX_Bonamik_IsSetup() {
    return false;
}

bool USQEX_KBD_Component::SQEX_Bonamik_IsAutoDisable() {
    return false;
}

float USQEX_KBD_Component::SQEX_Bonamik_GetWeight() {
    return 0.0f;
}

float USQEX_KBD_Component::SQEX_Bonamik_GetTeleportDistance() {
    return 0.0f;
}

float USQEX_KBD_Component::SQEX_Bonamik_GetSpeedRate() const {
    return 0.0f;
}

int32 USQEX_KBD_Component::SQEX_Bonamik_GetNumReferences() const {
    return 0;
}

FVector USQEX_KBD_Component::SQEX_Bonamik_GetGravity() const {
    return FVector{};
}

void USQEX_KBD_Component::SQEX_Bonamik_EnablePresetWind(const TArray<FName>& PresetNames) {
}

void USQEX_KBD_Component::SQEX_Bonamik_DisablePresetWind(const TArray<FName>& PresetNames) {
}

void USQEX_KBD_Component::SQEX_Bonamik_ClearExtendEmissiveWind(float BlendTime, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_ClearEmissiveWind(float BlendTime, bool bApplyToChildren) {
}

void USQEX_KBD_Component::SQEX_Bonamik_ClearAllPresetWind() {
}

int32 USQEX_KBD_Component::SQEX_Bonamik_AddTemporaryCollision(const TArray<FName>& CollisionGroups, const TArray<FSQEX_BonamikTempCollisionParameter>& CollisionParam) {
    return 0;
}

void USQEX_KBD_Component::SQEX_Bonamik_AddReferenceDefault(bool bEnableOtherInstance) {
}

void USQEX_KBD_Component::SQEX_Bonamik_AddReferenceCommon(USQEX_KBD_Component* OtherComponent) {
}

void USQEX_KBD_Component::SQEX_Bonamik_AddReference(USQEX_KBD_Component* OtherComponent, const FString& ReferenceGroupName) {
}

USQEX_KBD_Component::USQEX_KBD_Component() {
    this->SkeletalMeshComponent = NULL;
    this->CharacterMovementComponent = NULL;
}

