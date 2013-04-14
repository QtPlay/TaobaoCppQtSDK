#ifndef SELLERCENTERROLESGETREQUEST_H
#define SELLERCENTERROLESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SellercenterRolesGetResponse.h>

/**
 * TOP API: 获取指定卖家的角色列表，只能获取属于登陆者自己的信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterRolesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);


  virtual SellercenterRolesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 卖家昵称(只允许查询自己的信息：当前登陆者)
 **/
  QString nick;

};

#endif  /* SELLERCENTERROLESGETREQUEST_H */
