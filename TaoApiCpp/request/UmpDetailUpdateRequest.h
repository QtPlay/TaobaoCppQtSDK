#ifndef UMPDETAILUPDATEREQUEST_H
#define UMPDETAILUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpDetailUpdateResponse.h>

/**
 * TOP API: 更新活动详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getContent() const
;  void setContent (QString content);

 qlonglong getDetailId() const
;  void setDetailId (qlonglong detailId);


  virtual UmpDetailUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动详情内容，可以通过ump sdk中的MarketingTool来生成这个内容
 **/
  QString content;

/**
 * @brief 活动详情id
 **/
  qlonglong detailId;

};

#endif  /* UMPDETAILUPDATEREQUEST_H */
