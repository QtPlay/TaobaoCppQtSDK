#ifndef TRADERATESGETREQUEST_H
#define TRADERATESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TraderatesGetResponse.h>

/**
 * TOP API: 搜索评价信息，只能获取距今180天内的评价记录(只支持查询卖家给出或得到的评价)。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TraderatesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndDate() const
;  void setEndDate (QDateTime endDate);

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getRateType() const
;  void setRateType (QString rateType);

 QString getResult() const
;  void setResult (QString result);

 QString getRole() const
;  void setRole (QString role);

 QDateTime getStartDate() const
;  void setStartDate (QDateTime startDate);

 qlonglong getTid() const
;  void setTid (qlonglong tid);

 bool getUseHasNext() const
;  void setUseHasNext (bool useHasNext);


  virtual TraderatesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 评价结束时间。如果只输入结束时间，那么全部返回所有评价数据。
 **/
  QDateTime endDate;

/**
 * @brief 需返回的字段列表。可选值：TradeRate 结构中的所有字段，多个字段之间用“,”分隔
 **/
  QString fields;

/**
 * @brief 商品的数字ID
 **/
  qlonglong numIid;

/**
 * @brief 页码。取值范围:大于零的整数最大限制为200; 默认值:1
 **/
  qlonglong pageNo;

/**
 * @brief 每页获取条数。默认值40，最小值1，最大值150。
 **/
  qlonglong pageSize;

/**
 * @brief 评价类型。可选值:get(得到),give(给出)
 **/
  QString rateType;

/**
 * @brief 评价结果。可选值:good(好评),neutral(中评),bad(差评)
 **/
  QString result;

/**
 * @brief 评价者角色即评价的发起方。可选值:seller(卖家),buyer(买家)。 当 give buyer 以买家身份给卖家的评价； 当 get seller 以买家身份得到卖家给的评价； 当 give seller 以卖家身份给买家的评价； 当 get buyer 以卖家身份得到买家给的评价。
 **/
  QString role;

/**
 * @brief 评价开始时。如果只输入开始时间，那么能返回开始时间之后的评价数据。
 **/
  QDateTime startDate;

/**
 * @brief 交易订单id，可以是父订单id号，也可以是子订单id号
 **/
  qlonglong tid;

/**
 * @brief 是否启用has_next的分页方式，如果指定true,则返回的结果中不包含总记录数，但是会新增一个是否存在下一页的的字段，通过此种方式获取评价信息，效率在原有的基础上有80%的提升。
 **/
  bool useHasNext;

};

#endif  /* TRADERATESGETREQUEST_H */
