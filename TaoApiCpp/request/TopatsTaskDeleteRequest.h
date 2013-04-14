#ifndef TOPATSTASKDELETEREQUEST_H
#define TOPATSTASKDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsTaskDeleteResponse.h>

/**
 * TOP API: 可用于取消已经创建的ATS任务。</br> 
条件限制：1)一次只可以取消一个任务</br> 
         2）只能取消自己创建的任务</br>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsTaskDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getTaskId() const
;  void setTaskId (qlonglong taskId);


  virtual TopatsTaskDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要取消的任务ID
 **/
  qlonglong taskId;

};

#endif  /* TOPATSTASKDELETEREQUEST_H */
