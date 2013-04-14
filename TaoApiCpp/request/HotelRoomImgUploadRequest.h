#ifndef HOTELROOMIMGUPLOADREQUEST_H
#define HOTELROOMIMGUPLOADREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelRoomImgUploadResponse.h>

/**
 * TOP API: 此接口用于为商品上传商品图片。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomImgUploadRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getGid() const
;  void setGid (qlonglong gid);

 FileItem getPic() const
;  void setPic (FileItem pic);

 qlonglong getPosition() const
;  void setPosition (qlonglong position);


  virtual HotelRoomImgUploadResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 酒店房间商品gid。必须为数字。
 **/
  qlonglong gid;

/**
 * @brief 酒店商品图片。类型:JPG,GIF;最大长度:500K。支持的文件类型：gif,jpg,jpeg,png。 
如果原图片少于5张，若没传序号或序号大于原图片个数，则在原图片最后添加，否则按序号插入到原图片中去，自动后移。 
如果原图片大于5张，若没传序号，则替换最后一张图片，否则在序号位置插入，图片向后移，最后一张被删除。
 **/
  FileItem pic;

/**
 * @brief 图片序号，可选值：1，2，3，4，5
 **/
  qlonglong position;

};

#endif  /* HOTELROOMIMGUPLOADREQUEST_H */
