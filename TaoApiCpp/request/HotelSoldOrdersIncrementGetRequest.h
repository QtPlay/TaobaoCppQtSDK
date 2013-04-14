#ifndef HOTELSOLDORDERSINCREMENTGETREQUEST_H
#define HOTELSOLDORDERSINCREMENTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelSoldOrdersIncrementGetResponse.h>

/**
 * TOP API: 1. 搜索当前会话用户作为卖家已卖出的增量交易数据  
2. 只能查询时间跨度为一天的增量交易记录：start_modified：2011-7-1 16:00:00 end_modified： 2011-7-2 15:59:59（注意不能写成16:00:00）  
3. 返回数据结果为创建订单时间的倒序
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelSoldOrdersIncrementGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndModified() const
;  void setEndModified (QDateTime endModified);

 bool getNeedGuest() const
;  void setNeedGuest (bool needGuest);

 bool getNeedMessage() const
;  void setNeedMessage (bool needMessage);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartModified() const
;  void setStartModified (QDateTime startModified);

 QString getStatus() const
;  void setStatus (QString status);

 bool getUseHasNext() const
;  void setUseHasNext (bool useHasNext);


  virtual HotelSoldOrdersIncrementGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 查询修改结束时间，必须大于修改开始时间（修改时间跨度不能大于1天）。格式：yyyy-MM-dd HH:mm:ss。
 **/
  QDateTime endModified;

/**
 * @brief 是否需要返回该订单的入住人列表。可选值：true，false。
 **/
  bool needGuest;

/**
 * @brief 是否返回买家留言，可选值true、false
 **/
  bool needMessage;

/**
 * @brief 分页页码。取值范围，大于零的整数，默认值1，即返回第一页的数据。
 **/
  qlonglong pageNo;

/**
 * @brief 页面大小，取值范围1-100，默认大小20。
 **/
  qlonglong pageSize;

/**
 * @brief 查询修改开始时间（修改时间跨度不能大于1天）。格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime startModified;

/**
 * @brief 交易状态，默认查询所有交易状态的数据，除了默认值外每次只能查询一种状态。可选值：A：等待买家付款。B：买家已付款待卖家发货。C：卖家已发货待买家确认。D：交易成功。E：交易关闭
 **/
  QString status;

/**
 * @brief 是否使用has_next的分页方式，如果指定true，则返回的结果中不包含总记录数，但是会新增一个是否存在下一页的字段，效率比总记录数高
 **/
  bool useHasNext;

};

#endif  /* HOTELSOLDORDERSINCREMENTGETREQUEST_H */
