#ifndef SHOPGETREQUEST_H
#define SHOPGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ShopGetResponse.h>

/**
 * TOP API: 获取卖家店铺的基本信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShopGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getNick() const
;  void setNick (QString nick);


  virtual ShopGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表。可选值：Shop 结构中的所有字段；多个字段之间用逗号(,)分隔
 **/
  QString fields;

/**
 * @brief 卖家昵称
 **/
  QString nick;

};

#endif  /* SHOPGETREQUEST_H */
