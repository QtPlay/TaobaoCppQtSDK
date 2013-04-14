#ifndef ITEMSKUSGETREQUEST_H
#define ITEMSKUSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemSkusGetResponse.h>

/**
 * TOP API: * 获取多个商品下的所有sku
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemSkusGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getNumIids() const
;  void setNumIids (QString numIids);


  virtual ItemSkusGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表。可选值：Sku结构体中的所有字段；字段之间用“,”分隔。
 **/
  QString fields;

/**
 * @brief sku所属商品数字id，必选。num_iid个数不能超过40个
 **/
  QString numIids;

};

#endif  /* ITEMSKUSGETREQUEST_H */
