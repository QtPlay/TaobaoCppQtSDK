#ifndef ITEMSKUGETREQUEST_H
#define ITEMSKUGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemSkuGetResponse.h>

/**
 * TOP API: 获取sku_id所对应的sku数据  
sku_id对应的sku要属于传入的nick对应的卖家
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemSkuGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 qlonglong getSkuId() const
;  void setSkuId (qlonglong skuId);


  virtual ItemSkuGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表。可选值：Sku结构体中的所有字段；字段之间用“,”分隔。
 **/
  QString fields;

/**
 * @brief 卖家nick(num_iid和nick必传一个)
 **/
  QString nick;

/**
 * @brief 商品的数字IID（num_iid和nick必传一个，推荐用num_iid）
 **/
  qlonglong numIid;

/**
 * @brief Sku的id。可以通过taobao.item.get得到
 **/
  qlonglong skuId;

};

#endif  /* ITEMSKUGETREQUEST_H */
