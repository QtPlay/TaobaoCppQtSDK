#ifndef SCITEMMAPQUERYREQUEST_H
#define SCITEMMAPQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ScitemMapQueryResponse.h>

/**
 * TOP API: 查找IC商品或分销商品与后端商品的关联信息。skuId如果不传就查找该itemId下所有的sku
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemMapQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 qlonglong getSkuId() const
;  void setSkuId (qlonglong skuId);


  virtual ScitemMapQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief map_type为1：前台ic商品id 
map_type为2：分销productid
 **/
  qlonglong itemId;

/**
 * @brief map_type为1：前台ic商品skuid  
map_type为2：分销商品的skuid
 **/
  qlonglong skuId;

};

#endif  /* SCITEMMAPQUERYREQUEST_H */
