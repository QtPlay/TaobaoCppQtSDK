#ifndef FENXIAODISTRIBUTORITEMSGETRESPONSE_H
#define FENXIAODISTRIBUTORITEMSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/FenxiaoItemRecord.h>


/**
 * @brief TOP RESPONSE API: 供应商查询分销商商品下载记录。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDistributorItemsGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoDistributorItemsGetResponse() { }

  QList<FenxiaoItemRecord> getRecords() const;
  void setRecords (QList<FenxiaoItemRecord> records);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 下载记录对象
 **/
  QList<FenxiaoItemRecord> records;

/**
 * @brief 查询结果记录数
 **/
  qlonglong totalResults;

};

#endif
