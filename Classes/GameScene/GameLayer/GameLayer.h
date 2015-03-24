//
//  GameLayer.h
//  Plane
//
//  Created by 软件开发 on 15/3/23.
//
//

#ifndef __Plane__GameLayer__
#define __Plane__GameLayer__

#include <stdio.h>

#include "Define.h"

#include "cocos2d.h"

#include "Plane.h"

#include "Bullet.h"

#endif /* defined(__Plane__GameLayer__) */

USING_NS_CC;

class GameLayer: public CCLayer
{
    
public:
    
    static GameLayer *createGameLayer(int level);
    
    bool initGameLayer(int level);
    
    virtual void onEnterTransitionDidFinish();
    
    bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    
    void ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
    
    void shootBullet();
    
    void addCloud(float dt);
    
    Plane *plane;
    
protected:
    
    CCPoint begin_positon;
    
    void addPlane(int type);
    
    void openTouch();

    int aLevel;

};