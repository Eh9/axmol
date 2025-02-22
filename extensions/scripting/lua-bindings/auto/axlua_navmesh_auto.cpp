#include "lua-bindings/auto/axlua_navmesh_auto.hpp"
#if defined(AX_ENABLE_NAVMESH)
#include "navmesh/NavMesh.h"
#include "lua-bindings/manual/navmesh/axlua_navmesh_conversions.h"
#include "lua-bindings/manual/tolua_fix.h"
#include "lua-bindings/manual/LuaBasicConversions.h"

int lua_ax_navmesh_NavMeshAgent_setRadius(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setRadius'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ax.NavMeshAgent:setRadius");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setRadius'", nullptr);
            return 0;
        }
        cobj->setRadius(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setRadius",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setRadius'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getRadius(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getRadius'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getRadius'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getRadius();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getRadius",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getRadius'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_setHeight(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setHeight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ax.NavMeshAgent:setHeight");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setHeight'", nullptr);
            return 0;
        }
        cobj->setHeight(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setHeight",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setHeight'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getHeight(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getHeight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getHeight'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getHeight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getHeight",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getHeight'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_setMaxAcceleration(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setMaxAcceleration'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ax.NavMeshAgent:setMaxAcceleration");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setMaxAcceleration'", nullptr);
            return 0;
        }
        cobj->setMaxAcceleration(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setMaxAcceleration",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setMaxAcceleration'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getMaxAcceleration(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getMaxAcceleration'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getMaxAcceleration'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getMaxAcceleration();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getMaxAcceleration",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getMaxAcceleration'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_setMaxSpeed(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setMaxSpeed'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ax.NavMeshAgent:setMaxSpeed");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setMaxSpeed'", nullptr);
            return 0;
        }
        cobj->setMaxSpeed(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setMaxSpeed",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setMaxSpeed'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getMaxSpeed(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getMaxSpeed'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getMaxSpeed'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getMaxSpeed();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getMaxSpeed",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getMaxSpeed'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_setSeparationWeight(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setSeparationWeight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ax.NavMeshAgent:setSeparationWeight");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setSeparationWeight'", nullptr);
            return 0;
        }
        cobj->setSeparationWeight(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setSeparationWeight",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setSeparationWeight'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getSeparationWeight(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getSeparationWeight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getSeparationWeight'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getSeparationWeight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getSeparationWeight",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getSeparationWeight'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_setObstacleAvoidanceType(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setObstacleAvoidanceType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        uint16_t arg0;

        ok &= luaval_to_uint16(tolua_S, 2,&arg0, "ax.NavMeshAgent:setObstacleAvoidanceType");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setObstacleAvoidanceType'", nullptr);
            return 0;
        }
        cobj->setObstacleAvoidanceType(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setObstacleAvoidanceType",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setObstacleAvoidanceType'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getObstacleAvoidanceType(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getObstacleAvoidanceType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getObstacleAvoidanceType'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getObstacleAvoidanceType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getObstacleAvoidanceType",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getObstacleAvoidanceType'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getCurrentVelocity(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getCurrentVelocity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getCurrentVelocity'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getCurrentVelocity();
        vec3_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getCurrentVelocity",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getCurrentVelocity'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_pause(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_pause'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_pause'", nullptr);
            return 0;
        }
        cobj->pause();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:pause",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_pause'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_resume(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_resume'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_resume'", nullptr);
            return 0;
        }
        cobj->resume();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:resume",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_resume'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_stop(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_stop'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_stop'", nullptr);
            return 0;
        }
        cobj->stop();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:stop",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_stop'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_setOrientationRefAxes(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setOrientationRefAxes'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ax::Vec3 arg0;

        ok &= luaval_to_vec3(tolua_S, 2, &arg0, "ax.NavMeshAgent:setOrientationRefAxes");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setOrientationRefAxes'", nullptr);
            return 0;
        }
        cobj->setOrientationRefAxes(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setOrientationRefAxes",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setOrientationRefAxes'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_setAutoOrientation(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setAutoOrientation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ax.NavMeshAgent:setAutoOrientation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setAutoOrientation'", nullptr);
            return 0;
        }
        cobj->setAutoOrientation(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setAutoOrientation",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setAutoOrientation'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_setAutoTraverseOffMeshLink(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setAutoTraverseOffMeshLink'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ax.NavMeshAgent:setAutoTraverseOffMeshLink");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setAutoTraverseOffMeshLink'", nullptr);
            return 0;
        }
        cobj->setAutoTraverseOffMeshLink(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setAutoTraverseOffMeshLink",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setAutoTraverseOffMeshLink'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_isOnOffMeshLink(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_isOnOffMeshLink'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_isOnOffMeshLink'", nullptr);
            return 0;
        }
        auto&& ret = cobj->isOnOffMeshLink();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:isOnOffMeshLink",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_isOnOffMeshLink'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_completeOffMeshLink(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_completeOffMeshLink'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_completeOffMeshLink'", nullptr);
            return 0;
        }
        cobj->completeOffMeshLink();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:completeOffMeshLink",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_completeOffMeshLink'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getCurrentOffMeshLinkData(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getCurrentOffMeshLinkData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getCurrentOffMeshLinkData'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getCurrentOffMeshLinkData();
        offmeshlinkdata_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getCurrentOffMeshLinkData",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getCurrentOffMeshLinkData'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_setUserData(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setUserData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        void* arg0;

        #pragma warning NO CONVERSION TO NATIVE FOR void*
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setUserData'", nullptr);
            return 0;
        }
        cobj->setUserData(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setUserData",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setUserData'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getUserData(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getUserData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getUserData'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getUserData();
        #pragma warning NO CONVERSION FROM NATIVE FOR void*;
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getUserData",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getUserData'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_setSyncFlag(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_setSyncFlag'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ax::NavMeshAgent::NavMeshAgentSyncFlag arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ax.NavMeshAgent:setSyncFlag");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_setSyncFlag'", nullptr);
            return 0;
        }
        cobj->setSyncFlag(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:setSyncFlag",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_setSyncFlag'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getSyncFlag(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getSyncFlag'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getSyncFlag'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getSyncFlag();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getSyncFlag",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getSyncFlag'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_syncToAgent(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_syncToAgent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_syncToAgent'", nullptr);
            return 0;
        }
        cobj->syncToAgent();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:syncToAgent",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_syncToAgent'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_syncToNode(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_syncToNode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_syncToNode'", nullptr);
            return 0;
        }
        cobj->syncToNode();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:syncToNode",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_syncToNode'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getVelocity(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshAgent*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshAgent_getVelocity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getVelocity'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getVelocity();
        vec3_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:getVelocity",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getVelocity'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshAgent_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        ax::NavMeshAgentParam arg0;
        ok &= luaval_to_navmeshagentparam(tolua_S, 2, &arg0, "ax.NavMeshAgent:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_create'", nullptr);
            return 0;
        }
        auto&& ret = ax::NavMeshAgent::create(arg0);
        object_to_luaval<ax::NavMeshAgent>(tolua_S, "ax.NavMeshAgent",(ax::NavMeshAgent*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ax.NavMeshAgent:create",argc, 1);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_create'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_navmesh_NavMeshAgent_getNavMeshAgentComponentName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ax.NavMeshAgent",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_getNavMeshAgentComponentName'", nullptr);
            return 0;
        }
        auto&& ret = ax::NavMeshAgent::getNavMeshAgentComponentName();
        lua_pushlstring(tolua_S,ret.data(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ax.NavMeshAgent:getNavMeshAgentComponentName",argc, 0);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_getNavMeshAgentComponentName'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_navmesh_NavMeshAgent_constructor(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshAgent* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshAgent_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::NavMeshAgent();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_object(tolua_S, ID, luaID, (void*)cobj,"ax.NavMeshAgent");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshAgent:NavMeshAgent",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshAgent_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_ax_navmesh_NavMeshAgent_finalize(lua_State* tolua_S)
{
    AXLOGV("luabindings: finalizing LUA object (NavMeshAgent)");
    return 0;
}

int lua_register_ax_navmesh_NavMeshAgent(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ax.NavMeshAgent");
    tolua_cclass(tolua_S,"NavMeshAgent","ax.NavMeshAgent","ax.Component",nullptr);

    tolua_beginmodule(tolua_S,"NavMeshAgent");
        tolua_function(tolua_S,"new",lua_ax_navmesh_NavMeshAgent_constructor);
        tolua_function(tolua_S,"setRadius",lua_ax_navmesh_NavMeshAgent_setRadius);
        tolua_function(tolua_S,"getRadius",lua_ax_navmesh_NavMeshAgent_getRadius);
        tolua_function(tolua_S,"setHeight",lua_ax_navmesh_NavMeshAgent_setHeight);
        tolua_function(tolua_S,"getHeight",lua_ax_navmesh_NavMeshAgent_getHeight);
        tolua_function(tolua_S,"setMaxAcceleration",lua_ax_navmesh_NavMeshAgent_setMaxAcceleration);
        tolua_function(tolua_S,"getMaxAcceleration",lua_ax_navmesh_NavMeshAgent_getMaxAcceleration);
        tolua_function(tolua_S,"setMaxSpeed",lua_ax_navmesh_NavMeshAgent_setMaxSpeed);
        tolua_function(tolua_S,"getMaxSpeed",lua_ax_navmesh_NavMeshAgent_getMaxSpeed);
        tolua_function(tolua_S,"setSeparationWeight",lua_ax_navmesh_NavMeshAgent_setSeparationWeight);
        tolua_function(tolua_S,"getSeparationWeight",lua_ax_navmesh_NavMeshAgent_getSeparationWeight);
        tolua_function(tolua_S,"setObstacleAvoidanceType",lua_ax_navmesh_NavMeshAgent_setObstacleAvoidanceType);
        tolua_function(tolua_S,"getObstacleAvoidanceType",lua_ax_navmesh_NavMeshAgent_getObstacleAvoidanceType);
        tolua_function(tolua_S,"getCurrentVelocity",lua_ax_navmesh_NavMeshAgent_getCurrentVelocity);
        tolua_function(tolua_S,"pause",lua_ax_navmesh_NavMeshAgent_pause);
        tolua_function(tolua_S,"resume",lua_ax_navmesh_NavMeshAgent_resume);
        tolua_function(tolua_S,"stop",lua_ax_navmesh_NavMeshAgent_stop);
        tolua_function(tolua_S,"setOrientationRefAxes",lua_ax_navmesh_NavMeshAgent_setOrientationRefAxes);
        tolua_function(tolua_S,"setAutoOrientation",lua_ax_navmesh_NavMeshAgent_setAutoOrientation);
        tolua_function(tolua_S,"setAutoTraverseOffMeshLink",lua_ax_navmesh_NavMeshAgent_setAutoTraverseOffMeshLink);
        tolua_function(tolua_S,"isOnOffMeshLink",lua_ax_navmesh_NavMeshAgent_isOnOffMeshLink);
        tolua_function(tolua_S,"completeOffMeshLink",lua_ax_navmesh_NavMeshAgent_completeOffMeshLink);
        tolua_function(tolua_S,"getCurrentOffMeshLinkData",lua_ax_navmesh_NavMeshAgent_getCurrentOffMeshLinkData);
        tolua_function(tolua_S,"setUserData",lua_ax_navmesh_NavMeshAgent_setUserData);
        tolua_function(tolua_S,"getUserData",lua_ax_navmesh_NavMeshAgent_getUserData);
        tolua_function(tolua_S,"setSyncFlag",lua_ax_navmesh_NavMeshAgent_setSyncFlag);
        tolua_function(tolua_S,"getSyncFlag",lua_ax_navmesh_NavMeshAgent_getSyncFlag);
        tolua_function(tolua_S,"syncToAgent",lua_ax_navmesh_NavMeshAgent_syncToAgent);
        tolua_function(tolua_S,"syncToNode",lua_ax_navmesh_NavMeshAgent_syncToNode);
        tolua_function(tolua_S,"getVelocity",lua_ax_navmesh_NavMeshAgent_getVelocity);
        tolua_function(tolua_S,"create", lua_ax_navmesh_NavMeshAgent_create);
        tolua_function(tolua_S,"getNavMeshAgentComponentName", lua_ax_navmesh_NavMeshAgent_getNavMeshAgentComponentName);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(ax::NavMeshAgent).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "ax.NavMeshAgent";
    g_typeCast[typeName] = "ax.NavMeshAgent";
    return 1;
}

int lua_ax_navmesh_NavMeshObstacle_getRadius(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshObstacle* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshObstacle",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshObstacle*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshObstacle_getRadius'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshObstacle_getRadius'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getRadius();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshObstacle:getRadius",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshObstacle_getRadius'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshObstacle_getHeight(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshObstacle* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshObstacle",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshObstacle*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshObstacle_getHeight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshObstacle_getHeight'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getHeight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshObstacle:getHeight",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshObstacle_getHeight'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshObstacle_setSyncFlag(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshObstacle* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshObstacle",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshObstacle*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshObstacle_setSyncFlag'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ax::NavMeshObstacle::NavMeshObstacleSyncFlag arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ax.NavMeshObstacle:setSyncFlag");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshObstacle_setSyncFlag'", nullptr);
            return 0;
        }
        cobj->setSyncFlag(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshObstacle:setSyncFlag",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshObstacle_setSyncFlag'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshObstacle_getSyncFlag(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshObstacle* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshObstacle",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshObstacle*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshObstacle_getSyncFlag'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshObstacle_getSyncFlag'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getSyncFlag();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshObstacle:getSyncFlag",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshObstacle_getSyncFlag'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshObstacle_syncToObstacle(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshObstacle* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshObstacle",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshObstacle*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshObstacle_syncToObstacle'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshObstacle_syncToObstacle'", nullptr);
            return 0;
        }
        cobj->syncToObstacle();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshObstacle:syncToObstacle",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshObstacle_syncToObstacle'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshObstacle_syncToNode(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshObstacle* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshObstacle",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshObstacle*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshObstacle_syncToNode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshObstacle_syncToNode'", nullptr);
            return 0;
        }
        cobj->syncToNode();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshObstacle:syncToNode",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshObstacle_syncToNode'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshObstacle_initWith(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshObstacle* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMeshObstacle",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMeshObstacle*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMeshObstacle_initWith'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        double arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ax.NavMeshObstacle:initWith");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "ax.NavMeshObstacle:initWith");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshObstacle_initWith'", nullptr);
            return 0;
        }
        auto&& ret = cobj->initWith(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshObstacle:initWith",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshObstacle_initWith'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMeshObstacle_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ax.NavMeshObstacle",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "ax.NavMeshObstacle:create");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "ax.NavMeshObstacle:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshObstacle_create'", nullptr);
            return 0;
        }
        auto&& ret = ax::NavMeshObstacle::create(arg0, arg1);
        object_to_luaval<ax::NavMeshObstacle>(tolua_S, "ax.NavMeshObstacle",(ax::NavMeshObstacle*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ax.NavMeshObstacle:create",argc, 2);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshObstacle_create'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_navmesh_NavMeshObstacle_getNavMeshObstacleComponentName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ax.NavMeshObstacle",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshObstacle_getNavMeshObstacleComponentName'", nullptr);
            return 0;
        }
        auto&& ret = ax::NavMeshObstacle::getNavMeshObstacleComponentName();
        lua_pushlstring(tolua_S,ret.data(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ax.NavMeshObstacle:getNavMeshObstacleComponentName",argc, 0);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshObstacle_getNavMeshObstacleComponentName'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_navmesh_NavMeshObstacle_constructor(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMeshObstacle* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMeshObstacle_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::NavMeshObstacle();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_object(tolua_S, ID, luaID, (void*)cobj,"ax.NavMeshObstacle");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMeshObstacle:NavMeshObstacle",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMeshObstacle_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_ax_navmesh_NavMeshObstacle_finalize(lua_State* tolua_S)
{
    AXLOGV("luabindings: finalizing LUA object (NavMeshObstacle)");
    return 0;
}

int lua_register_ax_navmesh_NavMeshObstacle(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ax.NavMeshObstacle");
    tolua_cclass(tolua_S,"NavMeshObstacle","ax.NavMeshObstacle","ax.Component",nullptr);

    tolua_beginmodule(tolua_S,"NavMeshObstacle");
        tolua_function(tolua_S,"new",lua_ax_navmesh_NavMeshObstacle_constructor);
        tolua_function(tolua_S,"getRadius",lua_ax_navmesh_NavMeshObstacle_getRadius);
        tolua_function(tolua_S,"getHeight",lua_ax_navmesh_NavMeshObstacle_getHeight);
        tolua_function(tolua_S,"setSyncFlag",lua_ax_navmesh_NavMeshObstacle_setSyncFlag);
        tolua_function(tolua_S,"getSyncFlag",lua_ax_navmesh_NavMeshObstacle_getSyncFlag);
        tolua_function(tolua_S,"syncToObstacle",lua_ax_navmesh_NavMeshObstacle_syncToObstacle);
        tolua_function(tolua_S,"syncToNode",lua_ax_navmesh_NavMeshObstacle_syncToNode);
        tolua_function(tolua_S,"initWith",lua_ax_navmesh_NavMeshObstacle_initWith);
        tolua_function(tolua_S,"create", lua_ax_navmesh_NavMeshObstacle_create);
        tolua_function(tolua_S,"getNavMeshObstacleComponentName", lua_ax_navmesh_NavMeshObstacle_getNavMeshObstacleComponentName);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(ax::NavMeshObstacle).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "ax.NavMeshObstacle";
    g_typeCast[typeName] = "ax.NavMeshObstacle";
    return 1;
}

int lua_ax_navmesh_NavMesh_update(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMesh* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMesh",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMesh*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMesh_update'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ax.NavMesh:update");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMesh_update'", nullptr);
            return 0;
        }
        cobj->update(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMesh:update",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMesh_update'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMesh_debugDraw(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMesh* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMesh",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMesh*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMesh_debugDraw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ax::Renderer* arg0;

        ok &= luaval_to_object<ax::Renderer>(tolua_S, 2, "ax.Renderer",&arg0, "ax.NavMesh:debugDraw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMesh_debugDraw'", nullptr);
            return 0;
        }
        cobj->debugDraw(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMesh:debugDraw",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMesh_debugDraw'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMesh_setDebugDrawEnable(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMesh* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMesh",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMesh*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMesh_setDebugDrawEnable'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ax.NavMesh:setDebugDrawEnable");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMesh_setDebugDrawEnable'", nullptr);
            return 0;
        }
        cobj->setDebugDrawEnable(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMesh:setDebugDrawEnable",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMesh_setDebugDrawEnable'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMesh_isDebugDrawEnabled(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMesh* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMesh",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMesh*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMesh_isDebugDrawEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMesh_isDebugDrawEnabled'", nullptr);
            return 0;
        }
        auto&& ret = cobj->isDebugDrawEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMesh:isDebugDrawEnabled",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMesh_isDebugDrawEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMesh_addNavMeshAgent(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMesh* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMesh",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMesh*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMesh_addNavMeshAgent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ax::NavMeshAgent* arg0;

        ok &= luaval_to_object<ax::NavMeshAgent>(tolua_S, 2, "ax.NavMeshAgent",&arg0, "ax.NavMesh:addNavMeshAgent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMesh_addNavMeshAgent'", nullptr);
            return 0;
        }
        cobj->addNavMeshAgent(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMesh:addNavMeshAgent",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMesh_addNavMeshAgent'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMesh_removeNavMeshAgent(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMesh* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMesh",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMesh*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMesh_removeNavMeshAgent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ax::NavMeshAgent* arg0;

        ok &= luaval_to_object<ax::NavMeshAgent>(tolua_S, 2, "ax.NavMeshAgent",&arg0, "ax.NavMesh:removeNavMeshAgent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMesh_removeNavMeshAgent'", nullptr);
            return 0;
        }
        cobj->removeNavMeshAgent(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMesh:removeNavMeshAgent",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMesh_removeNavMeshAgent'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMesh_addNavMeshObstacle(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMesh* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMesh",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMesh*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMesh_addNavMeshObstacle'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ax::NavMeshObstacle* arg0;

        ok &= luaval_to_object<ax::NavMeshObstacle>(tolua_S, 2, "ax.NavMeshObstacle",&arg0, "ax.NavMesh:addNavMeshObstacle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMesh_addNavMeshObstacle'", nullptr);
            return 0;
        }
        cobj->addNavMeshObstacle(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMesh:addNavMeshObstacle",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMesh_addNavMeshObstacle'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMesh_removeNavMeshObstacle(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMesh* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.NavMesh",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::NavMesh*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_navmesh_NavMesh_removeNavMeshObstacle'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ax::NavMeshObstacle* arg0;

        ok &= luaval_to_object<ax::NavMeshObstacle>(tolua_S, 2, "ax.NavMeshObstacle",&arg0, "ax.NavMesh:removeNavMeshObstacle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMesh_removeNavMeshObstacle'", nullptr);
            return 0;
        }
        cobj->removeNavMeshObstacle(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMesh:removeNavMeshObstacle",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMesh_removeNavMeshObstacle'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_navmesh_NavMesh_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ax.NavMesh",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        std::string_view arg0;
        std::string_view arg1;
        ok &= luaval_to_std_string_view(tolua_S, 2,&arg0, "ax.NavMesh:create");
        ok &= luaval_to_std_string_view(tolua_S, 3,&arg1, "ax.NavMesh:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMesh_create'", nullptr);
            return 0;
        }
        auto&& ret = ax::NavMesh::create(arg0, arg1);
        object_to_luaval<ax::NavMesh>(tolua_S, "ax.NavMesh",(ax::NavMesh*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ax.NavMesh:create",argc, 2);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMesh_create'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_navmesh_NavMesh_constructor(lua_State* tolua_S)
{
    int argc = 0;
    ax::NavMesh* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_navmesh_NavMesh_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::NavMesh();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_object(tolua_S, ID, luaID, (void*)cobj,"ax.NavMesh");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.NavMesh:NavMesh",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_ax_navmesh_NavMesh_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_ax_navmesh_NavMesh_finalize(lua_State* tolua_S)
{
    AXLOGV("luabindings: finalizing LUA object (NavMesh)");
    return 0;
}

int lua_register_ax_navmesh_NavMesh(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ax.NavMesh");
    tolua_cclass(tolua_S,"NavMesh","ax.NavMesh","ax.Object",nullptr);

    tolua_beginmodule(tolua_S,"NavMesh");
        tolua_function(tolua_S,"new",lua_ax_navmesh_NavMesh_constructor);
        tolua_function(tolua_S,"update",lua_ax_navmesh_NavMesh_update);
        tolua_function(tolua_S,"debugDraw",lua_ax_navmesh_NavMesh_debugDraw);
        tolua_function(tolua_S,"setDebugDrawEnable",lua_ax_navmesh_NavMesh_setDebugDrawEnable);
        tolua_function(tolua_S,"isDebugDrawEnabled",lua_ax_navmesh_NavMesh_isDebugDrawEnabled);
        tolua_function(tolua_S,"addNavMeshAgent",lua_ax_navmesh_NavMesh_addNavMeshAgent);
        tolua_function(tolua_S,"removeNavMeshAgent",lua_ax_navmesh_NavMesh_removeNavMeshAgent);
        tolua_function(tolua_S,"addNavMeshObstacle",lua_ax_navmesh_NavMesh_addNavMeshObstacle);
        tolua_function(tolua_S,"removeNavMeshObstacle",lua_ax_navmesh_NavMesh_removeNavMeshObstacle);
        tolua_function(tolua_S,"create", lua_ax_navmesh_NavMesh_create);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(ax::NavMesh).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "ax.NavMesh";
    g_typeCast[typeName] = "ax.NavMesh";
    return 1;
}
TOLUA_API int register_all_ax_navmesh(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"ax",0);
	tolua_beginmodule(tolua_S,"ax");

	lua_register_ax_navmesh_NavMeshAgent(tolua_S);
	lua_register_ax_navmesh_NavMeshObstacle(tolua_S);
	lua_register_ax_navmesh_NavMesh(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

#endif
