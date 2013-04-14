#ifndef SELLERCENTERROLEINFOGETRESPONSE_H
#define SELLERCENTERROLEINFOGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Role.h>


/**
 * @brief TOP RESPONSE API: 获取指定角色的信息。只能查询属于自己的角色信息 (主账号或者某个主账号的子账号登陆，只能查询属于该主账号的角色信息)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterRoleInfoGetResponse : public TaoResponse
{
public:
 virtual ~SellercenterRoleInfoGetResponse() { }

  Role getRole() const;
  void setRole (Role role);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 角色具体信息
 **/
  Role role;

};

#endif
