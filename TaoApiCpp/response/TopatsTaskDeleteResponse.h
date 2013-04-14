#ifndef TOPATSTASKDELETERESPONSE_H
#define TOPATSTASKDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 可用于取消已经创建的ATS任务。</br> 
条件限制：1)一次只可以取消一个任务</br> 
         2）只能取消自己创建的任务</br>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsTaskDeleteResponse : public TaoResponse
{
public:
 virtual ~TopatsTaskDeleteResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 表示操作是否成功，是为true，否为false。
 **/
  bool isSuccess;

};

#endif
