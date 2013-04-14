#ifndef ITEMIMGUPLOADREQUEST_H
#define ITEMIMGUPLOADREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemImgUploadResponse.h>

/**
 * TOP API: 添加一张商品图片到num_iid指定的商品中  
传入的num_iid所对应的商品必须属于当前会话的用户  
如果更新图片需要设置itemimg_id，且该itemimg_id的图片记录需要属于传入的num_iid对应的商品。如果新增图片则不用设置  
商品图片有数量和大小上的限制，根据卖家享有的服务（如：卖家订购了多图服务等），商品图片数量限制不同。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemImgUploadRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);

 FileItem getImage() const
;  void setImage (FileItem image);

 bool getIsMajor() const
;  void setIsMajor (bool isMajor);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 qlonglong getPosition() const
;  void setPosition (qlonglong position);


  virtual ItemImgUploadResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品图片id(如果是更新图片，则需要传该参数)
 **/
  qlonglong id;

/**
 * @brief 商品图片内容类型:JPG,GIF;最大:500KB 。支持的文件类型：gif,jpg,jpeg,png
 **/
  FileItem image;

/**
 * @brief 是否将该图片设为主图,可选值:true,false;默认值:false(非主图)
 **/
  bool isMajor;

/**
 * @brief 商品数字ID，该参数必须
 **/
  qlonglong numIid;

/**
 * @brief 图片序号
 **/
  qlonglong position;

};

#endif  /* ITEMIMGUPLOADREQUEST_H */
