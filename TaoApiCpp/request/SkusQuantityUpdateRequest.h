#ifndef SKUSQUANTITYUPDATEREQUEST_H
#define SKUSQUANTITYUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SkusQuantityUpdateResponse.h>

/**
 * TOP API: 提供按照全量/增量的方式批量修改SKU库存的功能
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SkusQuantityUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 QString getOuteridQuantities() const
;  void setOuteridQuantities (QString outeridQuantities);

 QString getSkuidQuantities() const
;  void setSkuidQuantities (QString skuidQuantities);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual SkusQuantityUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品数字ID，必填参数
 **/
  qlonglong numIid;

/**
 * @brief 特殊可选，skuIdQuantities为空的时候用该字段通过outerId来指定sku和其库存修改值。格式为outerId:库存修改值;outerId:库存修改值。当skuIdQuantities不为空的时候该字段失效。当一个outerId对应多个sku时，所有匹配到的sku都会被修改库存。最多支持20个SKU同时修改。
 **/
  QString outeridQuantities;

/**
 * @brief sku库存批量修改入参，用于指定一批sku和每个sku的库存修改值，特殊可填。格式为skuId:库存修改值;skuId:库存修改值。最多支持20个SKU同时修改。
 **/
  QString skuidQuantities;

/**
 * @brief 库存更新方式，可选。1为全量更新，2为增量更新。如果不填，默认为全量更新。当选择全量更新时，如果库存更新值传入的是负数，会出错并返回错误码；当选择增量更新时，如果库存更新值为负数且绝对值大于当前库存，则sku库存会设置为0.
 **/
  qlonglong type;

};

#endif  /* SKUSQUANTITYUPDATEREQUEST_H */
