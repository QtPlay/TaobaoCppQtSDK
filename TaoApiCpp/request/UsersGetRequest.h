#ifndef USERSGETREQUEST_H
#define USERSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UsersGetResponse.h>

/**
 * TOP API: 传入多个淘宝会员帐号返回多个用户公开信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UsersGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getNicks() const
;  void setNicks (QString nicks);


  virtual UsersGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 查询字段：User数据结构的公开信息字段列表，以半角逗号(,)分隔
 **/
  QString fields;

/**
 * @brief 用户昵称，多个以半角逗号(,)分隔，最多40个
 **/
  QString nicks;

};

#endif  /* USERSGETREQUEST_H */
