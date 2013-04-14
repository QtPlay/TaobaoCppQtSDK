#ifndef UMPACTIVITYADDREQUEST_H
#define UMPACTIVITYADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpActivityAddResponse.h>

/**
 * TOP API: 新增优惠活动。设置优惠活动的基本信息，比如活动时间，活动针对的对象（可以是满足某些条件的买家）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivityAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getContent() const
;  void setContent (QString content);

 qlonglong getToolId() const
;  void setToolId (qlonglong toolId);


  virtual UmpActivityAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动内容，通过ump sdk里面的MarkeitngTool来生成
 **/
  QString content;

/**
 * @brief 工具id
 **/
  qlonglong toolId;

};

#endif  /* UMPACTIVITYADDREQUEST_H */
