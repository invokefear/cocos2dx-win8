﻿/*
* cocos2d-x   http://www.cocos2d-x.org
*
* Copyright (c) 2010-2011 - cocos2d-x community
* 
* Portions Copyright (c) Microsoft Open Technologies, Inc.
* All Rights Reserved
* 
* Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. 
* You may obtain a copy of the License at 
* 
* http://www.apache.org/licenses/LICENSE-2.0 
* 
* Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an 
* "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
* See the License for the specific language governing permissions and limitations under the License.
*/

#include "pch.h"

#include "HelloWorldScene.h"
#include "CCCommon.h"
#include "BasicLoader.h"
#include <CCParticleExamples.h>
#include <vector>
#include <time.h>


using namespace cocos2d;
using namespace Windows::Foundation;
using namespace Windows::Devices::Sensors;

HelloWorld::~HelloWorld()
{

}

HelloWorld::HelloWorld()
{
}

CCScene* HelloWorld::scene()
{
	CCScene * scene = NULL;
	do 
	{		// 'scene' is an autorelease object
		scene = CCScene::create();
		CC_BREAK_IF(! scene);

		// 'layer' is an autorelease object
		HelloWorld *layer = HelloWorld::create();
		CC_BREAK_IF(! layer);

		// add layer as a child to scene
		scene->addChild(layer);
	} while (0);

	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
	bool bRet = false;

	do 
	{
		if ( !CCLayer::init() )
		{
			break;
		}


		CCLabelTTF* pLabel = CCLabelTTF::create("Hello World, Test Cpp", "Times New Roman", 24);
		CCSize size = CCDirector::sharedDirector()->getWinSize();
		pLabel->setPosition( ccp(size.width * 0.5, size.height * 0.5) );
		pLabel->setColor(ccc3(160, 80, 5));
		this->addChild(pLabel, 0);

		//this->resetGame();
		//start = true;
		//CCSprite *b = CCSprite::create("back.png");
		//b->setAnchorPoint(ccp(0, 0));
		//b->setPosition(ccp(0, 0));
		//this->addChild(b);

		setIsTouchEnabled(true);

		bRet = true;
	} while (0);

	return bRet;
}

void HelloWorld::ccTouchesBegan(CCSet* touches, CCEvent *event)
{

}

void HelloWorld::ccTouchesMoved(CCSet* touches, CCEvent* event)
{

}

// cpp with cocos2d-x
void HelloWorld::ccTouchesEnded(CCSet* touches, CCEvent* event)
{

}

//void HelloWorld::registerWithTouchDispatcher()
//{
	// CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this,0,true);
	//CCTouchDispatcher::sharedDispatcher()->addStandardDelegate(this,0);
//}
