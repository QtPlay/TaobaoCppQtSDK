#ifndef ITEMSCUSTOMGETREQUEST_H
#define ITEMSCUSTOMGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemsCustomGetResponse.h>

/**
 * TOP API: 跟据卖家设定的商品外部id获取商品  
这个商品对应卖家从传入的session中获取，需要session绑定
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemsCustomGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getOuterId() const
;  void setOuterId (QString outerId);


  virtual ItemsCustomGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表。可选值：Item商品结构体中的所有字段；多个字段之间用“,”分隔。如果想返回整个子对象，那字段为item_img，如果是想返回子对象里面的字段，那字段为item_img.url。新增返回字段：one_station标记商品是否淘1站商品
 **/
  QString fields;

/**
 * @brief 商品的外部商品ID，支持批量，最多不超过40个。
 **/
  QString outerId;

};

#endif  /* ITEMSCUSTOMGETREQUEST_H */
