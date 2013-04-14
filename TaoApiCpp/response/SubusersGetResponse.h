#ifndef SUBUSERSGETRESPONSE_H
#define SUBUSERSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/SubAccountInfo.h>


/**
 * @brief TOP RESPONSE API: 获取主账号下的子账号简易账号信息集合。（只能通过主账号登陆并且查询该属于主账号的子账号信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubusersGetResponse : public TaoResponse
{
public:
 virtual ~SubusersGetResponse() { }

  QList<SubAccountInfo> getSubaccounts() const;
  void setSubaccounts (QList<SubAccountInfo> subaccounts);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 子账号基本信息
 **/
  QList<SubAccountInfo> subaccounts;

};

#endif
