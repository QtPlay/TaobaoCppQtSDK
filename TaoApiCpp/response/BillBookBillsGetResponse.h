#ifndef BILLBOOKBILLSGETRESPONSE_H
#define BILLBOOKBILLSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/BookBill.h>


/**
 * @brief TOP RESPONSE API: 查询虚拟账户明细数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BillBookBillsGetResponse : public TaoResponse
{
public:
 virtual ~BillBookBillsGetResponse() { }

  QList<BookBill> getBills() const;
  void setBills (QList<BookBill> bills);  bool getHasNext() const;
  void setHasNext (bool hasNext);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 虚拟账户账单列表
 **/
  QList<BookBill> bills;

/**
 * @brief 是否有下一页
 **/
  bool hasNext;

/**
 * @brief 当前查询的结果数,非总数
 **/
  qlonglong totalResults;

};

#endif
