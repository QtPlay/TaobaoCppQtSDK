#ifndef UMPACTIVITYUPDATEREQUEST_H
#define UMPACTIVITYUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpActivityUpdateResponse.h>

/**
 * TOP API: 修改营销活动
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivityUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActId() const
;  void setActId (qlonglong actId);

 QString getContent() const
;  void setContent (QString content);


  virtual UmpActivityUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动id
 **/
  qlonglong actId;

/**
 * @brief 营销活动内容，json格式，通过ump sdk 的marketingTool来生成
 **/
  QString content;

};

#endif  /* UMPACTIVITYUPDATEREQUEST_H */
