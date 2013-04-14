#ifndef SELLERCATSLISTGETREQUEST_H
#define SELLERCATSLISTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SellercatsListGetResponse.h>

/**
 * TOP API: 此API获取当前卖家店铺在淘宝前端被展示的浏览导航类目（面向买家）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercatsListGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);


  virtual SellercatsListGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 卖家昵称
 **/
  QString nick;

};

#endif  /* SELLERCATSLISTGETREQUEST_H */
