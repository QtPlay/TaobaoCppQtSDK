#ifndef SELLERCENTERSUBUSERSGETREQUEST_H
#define SELLERCENTERSUBUSERSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SellercenterSubusersGetResponse.h>

/**
 * TOP API: 根据主账号nick查询该账号下所有的子账号列表，只能查询属于自己的账号信息 (主账号以及所属子账号)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterSubusersGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);


  virtual SellercenterSubusersGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 表示卖家昵称
 **/
  QString nick;

};

#endif  /* SELLERCENTERSUBUSERSGETREQUEST_H */
