#ifndef FENXIAOPRODUCTCATSGETRESPONSE_H
#define FENXIAOPRODUCTCATSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ProductCat.h>


/**
 * @brief TOP RESPONSE API: 查询供应商的所有产品线数据。根据登陆用户来查询，不需要其他入参
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductcatsGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductcatsGetResponse() { }

  QList<ProductCat> getProductcats() const;
  void setProductcats (QList<ProductCat> productcats);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 产品线列表。返回 ProductCat 包含的字段信息。
 **/
  QList<ProductCat> productcats;

/**
 * @brief 查询结果记录数
 **/
  qlonglong totalResults;

};

#endif
