#ifndef UMPRANGEDELETERESPONSE_H
#define UMPRANGEDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 去指先前指定在某项活动中，某些类型的物品参加或者不参加活动的设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpRangeDeleteResponse : public TaoResponse
{
public:
 virtual ~UmpRangeDeleteResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 调用是否成功
 **/
  bool isSuccess;

};

#endif
