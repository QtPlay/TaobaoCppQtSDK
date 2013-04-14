#ifndef FENXIAOPRODUCTSKUDELETEREQUEST_H
#define FENXIAOPRODUCTSKUDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductSkuDeleteResponse.h>

/**
 * TOP API: 根据sku properties删除sku数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductSkuDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getProperties() const
;  void setProperties (QString properties);


  virtual FenxiaoProductSkuDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 产品id
 **/
  qlonglong productId;

/**
 * @brief sku属性
 **/
  QString properties;

};

#endif  /* FENXIAOPRODUCTSKUDELETEREQUEST_H */
