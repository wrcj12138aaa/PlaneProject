//
//  MapLayer.h
//  Plane
//
//  Created by 软件开发 on 15/3/23.
//
//

#ifndef __Plane__MapLayer__
#define __Plane__MapLayer__

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

#endif /* defined(__Plane__MapLayer__) */


class MapLayer :public CCLayer
{

protected:
    
    CCSprite *map_a;
    CCSprite *map_b;
    
public:
    
    static MapLayer *creatMaplayer(int level);
    
    bool initMaplayer(int level);
    
    void setupMapView(int level);
    
    void update(float dt);
    
    void onEnter();
                        //  当前节点 被加到，被移除 从父节点时 回掉该方法
    void onExit();
                       // start -> enter-> finish-> exit
    void onEnterTransitionDidFinish();
    
    void onEnterTransitionDidStart();

};