#ifndef UMPTOOLUPDATERESPONSE_H
#define UMPTOOLUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 修改工具
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpToolUpdateResponse : public TaoResponse
{
public:
 virtual ~UmpToolUpdateResponse() { }

  qlonglong getToolId() const;
  void setToolId (qlonglong toolId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 更新后生成的新的工具id
 **/
  qlonglong toolId;

};

#endif
