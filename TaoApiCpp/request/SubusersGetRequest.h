#ifndef SUBUSERSGETREQUEST_H
#define SUBUSERSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubusersGetResponse.h>

/**
 * TOP API: 获取主账号下的子账号简易账号信息集合。（只能通过主账号登陆并且查询该属于主账号的子账号信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubusersGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual SubusersGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主账号用户名
 **/
  QString userNick;

};

#endif  /* SUBUSERSGETREQUEST_H */
