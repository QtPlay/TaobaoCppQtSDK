#ifndef UMPRANGEDELETEREQUEST_H
#define UMPRANGEDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpRangeDeleteResponse.h>

/**
 * TOP API: 去指先前指定在某项活动中，某些类型的物品参加或者不参加活动的设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpRangeDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActId() const
;  void setActId (qlonglong actId);

 QString getIds() const
;  void setIds (QString ids);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual UmpRangeDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动id
 **/
  qlonglong actId;

/**
 * @brief id列表，当范围类型为商品时，该id为商品id；当范围类型为类目时，该id为类目id
 **/
  QString ids;

/**
 * @brief 范围的类型，比如是全店，商品，类目见：MarketingConstants.PARTICIPATE_TYPE_*
 **/
  qlonglong type;

};

#endif  /* UMPRANGEDELETEREQUEST_H */
