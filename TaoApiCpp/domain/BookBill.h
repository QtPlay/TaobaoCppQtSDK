#ifndef BOOKBILL_H
#define BOOKBILL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 虚拟账户账单结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BookBill : public TaoDomain
{

public:
 virtual ~BookBill() { }

  qlonglong getAccountId() const;
  void setAccountId (qlonglong accountId);
  qlonglong getAmount() const;
  void setAmount (qlonglong amount);
  qlonglong getBid() const;
  void setBid (qlonglong bid);
  QDateTime getBookTime() const;
  void setBookTime (QDateTime bookTime);
  QString getDescription() const;
  void setDescription (QString description);
  QDateTime getGmtCreate() const;
  void setGmtCreate (QDateTime gmtCreate);
  qlonglong getJournalType() const;
  void setJournalType (qlonglong journalType);
  
  virtual void parseResponse();

private:
/**
 * @brief 虚拟账户科目编号
 **/
  qlonglong accountId;

/**
 * @brief 操作金额
 **/
  qlonglong amount;

/**
 * @brief 虚拟账户流水编号
 **/
  qlonglong bid;

/**
 * @brief 记账时间
 **/
  QDateTime bookTime;

/**
 * @brief 备注
 **/
  QString description;

/**
 * @brief 创建时间
 **/
  QDateTime gmtCreate;

/**
 * @brief 流水类型:101-可用金充值;102-可用金扣除;103-冻结;104-解冻;105-冻结金充值;106-冻结金扣除
 **/
  qlonglong journalType;

};

#endif  /* BOOKBILL_H */
