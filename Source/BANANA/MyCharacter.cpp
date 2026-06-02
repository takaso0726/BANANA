// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

//デフォルト値を設定します
AMyCharacter::AMyCharacter()
{
 	// この文字を設定すると、毎フレーム Tick() 関数が呼び出されます。必要ない場合は、パフォーマンス向上のためにこの設定をオフにすることもできます。
	PrimaryActorTick.bCanEverTick = true;

}

// ゲーム開始時またはスポーン時に呼び出されます
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// フレームごとに呼び出されます
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// 入力に機能をバインドするために呼び出されます。
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

