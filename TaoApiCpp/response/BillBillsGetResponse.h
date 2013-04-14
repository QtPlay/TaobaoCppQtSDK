#ifndef BILLBILLSGETRESPONSE_H
#define BILLBILLSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Bill.h>


/**
 * @brief TOP RESPONSE API: 查询账单明细数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BillBillsGetResponse : public TaoResponse
{
public:
 virtual ~BillBillsGetResponse() { }

  QList<Bill> getBills() const;
  void setBills (QList<Bill> bills);  bool getHasNext() const;
  void setHasNext (bool hasNext);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 账单列表
 **/
  QList<Bill> bills;

/**
 * @brief 是否存在下一页
 **/
  bool hasNext;

/**
 * @brief 当前页查询返回的结果数(0-100)。相同的查询时间段条件下，最大只能获取总共5000条记录。所以当大于等于5000时 ISV可以通过start_time及end_time来进行拆分，以保证可以查询到全部数据
 **/
  qlonglong totalResults;

};

#endif
