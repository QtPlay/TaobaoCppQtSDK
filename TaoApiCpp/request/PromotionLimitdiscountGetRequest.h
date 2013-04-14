#ifndef PROMOTIONLIMITDISCOUNTGETREQUEST_H
#define PROMOTIONLIMITDISCOUNTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionLimitdiscountGetResponse.h>

/**
 * TOP API: 分页查询某个卖家的限时打折信息。每页20条数据，按照结束时间降序排列。也可指定某一个限时打折id查询唯一的限时打折信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionLimitdiscountGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 qlonglong getLimitDiscountId() const
;  void setLimitDiscountId (qlonglong limitDiscountId);

 qlonglong getPageNumber() const
;  void setPageNumber (qlonglong pageNumber);

 QDateTime getStartTime() const
;  void setStartTime (QDateTime startTime);

 QString getStatus() const
;  void setStatus (QString status);


  virtual PromotionLimitdiscountGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 限时打折结束时间。输入的时间会被截取，年月日有效，时分秒忽略。
 **/
  QDateTime endTime;

/**
 * @brief 限时打折ID。这个针对查询唯一限时打折情况。若此字段不为空，则说明操作为单条限时打折记录查询，其他字段忽略。若想分页按条件查询，这个字段置为空。
 **/
  qlonglong limitDiscountId;

/**
 * @brief 分页页号。默认1。当页数大于最大页数时，结果为最大页数的数据。
 **/
  qlonglong pageNumber;

/**
 * @brief 限时打折开始时间。输入的时间会被截取，年月日有效，时分秒忽略。
 **/
  QDateTime startTime;

/**
 * @brief 限时打折活动状态。ALL:全部状态;OVER:已结束;DOING:进行中;PROPARE:未开始(只支持大写)。当limit_discount_id为空时，为空时，默认为全部的状态。
 **/
  QString status;

};

#endif  /* PROMOTIONLIMITDISCOUNTGETREQUEST_H */
