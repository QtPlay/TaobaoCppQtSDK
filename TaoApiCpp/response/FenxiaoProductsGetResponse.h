#ifndef FENXIAOPRODUCTSGETRESPONSE_H
#define FENXIAOPRODUCTSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/FenxiaoProduct.h>


/**
 * @brief TOP RESPONSE API: 查询供应商的产品数据。 
 
    * 入参传入pids将优先查询，即只按这个条件查询。 
    *入参传入sku_number将优先查询(没有传入pids)，即只按这个条件查询(最多显示50条) 
    * 入参fields传skus将查询sku的数据，不传该参数默认不查询，返回产品的其它信息。 
    * 入参fields传入images将查询多图数据，不传只返回主图数据。 
    * 入参fields仅对传入pids生效（只有按ID查询时，才能查询额外的数据） 
    * 查询结果按照产品发布时间倒序，即时间近的数据在前。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductsGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductsGetResponse() { }

  QList<FenxiaoProduct> getProducts() const;
  void setProducts (QList<FenxiaoProduct> products);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 产品对象记录集。返回 FenxiaoProduct 包含的字段信息。
 **/
  QList<FenxiaoProduct> products;

/**
 * @brief 查询结果记录数
 **/
  qlonglong totalResults;

};

#endif
