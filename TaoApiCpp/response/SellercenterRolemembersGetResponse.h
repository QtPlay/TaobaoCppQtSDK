#ifndef SELLERCENTERROLEMEMBERSGETRESPONSE_H
#define SELLERCENTERROLEMEMBERSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/SubUserInfo.h>


/**
 * @brief TOP RESPONSE API: 获取指定卖家的角色下属员工列表，只能获取属于登陆者自己的信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterRolemembersGetResponse : public TaoResponse
{
public:
 virtual ~SellercenterRolemembersGetResponse() { }

  QList<SubUserInfo> getSubusers() const;
  void setSubusers (QList<SubUserInfo> subusers);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 子账号基本信息列表。具体信息为id、子账号用户名、主账号id、主账号昵称、当前状态值、是否分流
 **/
  QList<SubUserInfo> subusers;

};

#endif
